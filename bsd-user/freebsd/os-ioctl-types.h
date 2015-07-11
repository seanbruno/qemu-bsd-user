
STRUCT_SPECIAL(termios)

STRUCT(winsize,
	TYPE_SHORT, TYPE_SHORT, TYPE_SHORT, TYPE_SHORT)

STRUCT(fiodgname_arg,
	TYPE_INT, TYPE_PTRVOID)

STRUCT(ifconf,
	TYPE_INT, TYPE_PTRVOID)

STRUCT(sockaddr,
	TYPE_SHORT, MK_ARRAY(TYPE_CHAR, 14))

STRUCT(_ifreq_buffer,
	TYPE_PTRVOID, TYPE_PTRVOID)

STRUCT(ifreq_char,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_CHAR)

STRUCT(ifreq_short,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_SHORT)

STRUCT(ifreq_int,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT)

STRUCT(ifreq_ptr,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_PTRVOID)

STRUCT(ifreq_cap,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), MK_ARRAY(TYPE_INT, 2))

STRUCT(ifreq_sockaddr,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), MK_STRUCT(STRUCT_sockaddr))

STRUCT(ifreq_buf,
	MK_ARRAY(TYPE_CHAR, IFNAMSIZ), MK_STRUCT(STRUCT__ifreq_buffer))

STRUCT(ifdrv,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_PTRVOID, TYPE_PTRVOID, TYPE_PTRVOID)

STRUCT(ifgroupreq_ptr,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT, TYPE_PTRVOID)

STRUCT(ifmediareq,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT, TYPE_INT, TYPE_INT, TYPE_INT,
    TYPE_INT, TYPE_PTRVOID)

STRUCT(ifstat,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), MK_ARRAY(TYPE_CHAR, IFSTATMAX))

STRUCT(ieee80211req,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT, TYPE_INT, TYPE_INT, TYPE_PTRVOID)

STRUCT(lagg_reqport_lacp_opreq,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT,
    TYPE_INT,
    /* struct lacp_opreq */
    TYPE_SHORT, TYPE_CHAR, TYPE_SHORT, TYPE_SHORT, TYPE_SHORT, TYPE_CHAR,
    TYPE_SHORT, TYPE_CHAR, TYPE_SHORT, TYPE_SHORT, TYPE_SHORT, TYPE_CHAR)

STRUCT(lagg_reqall_lacp_opreq,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT, TYPE_PTRVOID, TYPE_PTRVOID,
    TYPE_INT,
    /* struct lacp_opreq */
    TYPE_SHORT, TYPE_CHAR, TYPE_SHORT, TYPE_SHORT, TYPE_SHORT, TYPE_CHAR,
    TYPE_SHORT, TYPE_CHAR, TYPE_SHORT, TYPE_SHORT, TYPE_SHORT, TYPE_CHAR)

STRUCT(lagg_reqflags,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT)

STRUCT(lagg_reqopts,
    MK_ARRAY(TYPE_CHAR, IFNAMSIZ), TYPE_INT, TYPE_INT, TYPE_INT, TYPE_INT,
    TYPE_INT)

