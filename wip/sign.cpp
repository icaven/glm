template <>
inline bool sign(float const & f)
{
	return (*((int *)(&f)) & 0x80000000) == 0;
}
