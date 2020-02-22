#include <syslog.h>

void
vsyslog_r(int pri, struct syslog_data *data, const char *fmt, va_list ap)
{
#ifdef HAVE_VSYSLOG
	vsyslog(pri, fmt, ap);
#endif
}
