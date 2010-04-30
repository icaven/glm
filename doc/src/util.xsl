<?xml version="1.0" encoding="iso-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:strip-space elements="*" />

<xsl:output 
	method="xml"
	media-type="application/xhtml+xml; charset=iso-8859-1"
	version="1.0"
	encoding="iso-8859-1"
	standalone="no"
	omit-xml-declaration="no"
	doctype-public="-//W3C//DTD XHTML 1.1//EN" 
	doctype-system="http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd"
	indent="no" />

<xsl:template match="link">
	<a href="{./@href}"><xsl:value-of select="." /></a>
</xsl:template>

<xsl:template match="image">
	<xsl:choose>
		<xsl:when test="./@href">
			<xsl:element name="a">
				<xsl:attribute name="class">menu-titre2</xsl:attribute>
				<xsl:attribute name="href"><xsl:value-of select="./@href" /></xsl:attribute>
				<xsl:element name="img">
					<xsl:attribute name="src"><xsl:value-of select="@file" /></xsl:attribute>
					<xsl:attribute name="alt"><xsl:value-of select="@file" /></xsl:attribute>
				</xsl:element>
			</xsl:element>
		</xsl:when>
		<xsl:otherwise>
			<xsl:element name="img">
				<xsl:attribute name="src"><xsl:value-of select="@file" /></xsl:attribute>
				<xsl:attribute name="alt"><xsl:value-of select="@file" /></xsl:attribute>
			</xsl:element>
		</xsl:otherwise>
	</xsl:choose>
</xsl:template>

  <xsl:template match="image-list">
    <div class="news-image">
      <xsl:apply-templates select="./image-element" />
    </div>
  </xsl:template>

  <xsl:template match="image-element">
    <a href="{./@normal}">
      <img src="{./@small}" alt="{./@title}" />
    </a>
  </xsl:template>

<xsl:template match="list">
	<xsl:value-of select="./@nom" /><br />
	<xsl:apply-templates select="./element"/>
	<br />
</xsl:template>

<xsl:template match="element">
	<xsl:apply-templates /><br />
</xsl:template>

<xsl:template match="paragraph">
	<div class="paragraph"><xsl:text /><xsl:apply-templates /><xsl:text /></div><br />
</xsl:template>

<xsl:template match="about-short">
  <div class="title3">
    <xsl:apply-templates select="./element" />
  </div>
  <br />
</xsl:template>
  
<xsl:template match="source">
	<xsl:value-of select="./@type"/>: <a href="{./@adresse}"><xsl:value-of select="."/></a><br />
</xsl:template>

<xsl:template match="menu">
  <div class="menu1">
    <br />
    <div>
      <a href="./goodies/logo1920x1200.png">
        <img class="menu-img" src="./common/logo.png" alt="GLM Logo"/>
      </a>
    </div>
    <br />
    <div>
      <a class="menu" href="{/glm/downloads/section/download/@link}">
        Download <xsl:value-of select="/glm/downloads/section/download/@name" />
      </a>
    </div>
  </div>
  <br />
  <xsl:apply-templates select="./menu-group"/>
  <br />
  <xsl:apply-templates select="./menu-link"/>
  <br />
  <!--div>
    <script type="text/javascript" src="http://feedjit.com/map/?bc=FFFFFF&amp;tc=494949&amp;brd1=FFFFFF&amp;lnk=494949&amp;hc=FF8000&amp;dot=FF8000"></script>
    <noscript>
      <a href="http://feedjit.com/">Feedjit Live Blog Stats</a>
    </noscript>
  </div-->
</xsl:template>

<xsl:template match="menu-pic">
  <div class="menu2">
    <a href="{@href}">
      <img class="menu-img" src="{@image}" alt="{@name}"/>
    </a>
  </div>
</xsl:template>

<xsl:template match="menu-link">
  <xsl:apply-templates select="./menu-pic"/>
</xsl:template>
  
<xsl:template match="menu-image">
  <div class="menu2">
    <a href="./common/glm.jpg">
      <img class="menu-img" src="./common/logo.jpg" alt="G-Truc"/>
    </a>
  </div>
</xsl:template>
  
<xsl:template match="menu-group">
  <xsl:apply-templates select="./menu-entry"/>
  <br />
</xsl:template>

<xsl:template match="menu-entry">
  <div class="menu2">
    <a href="{./@href}">
      <xsl:value-of select="./@name"/>
    </a>
  </div>
</xsl:template>

</xsl:stylesheet>
