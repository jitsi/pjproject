#define PJMEDIA_HAS_VIDEO   1

/* Allocate more space for RTCP SDES packets (Linphone uses a quite long name) */
#define PJMEDIA_RTCP_RX_SDES_BUF_LEN 128

/* Drop old keyframes in the jitter-buffer to reduce latency. */
#define PJMEDIA_VID_STREAM_SKIP_PACKETS_TO_REDUCE_LATENCY 1

/* Increase packet size. */
#define PJ_ICE_MAX_CAND 32
#define PJ_ICE_MAX_CHECKS (PJ_ICE_MAX_CAND * 16)
#define PJSIP_MAX_PKT_LEN 12288
