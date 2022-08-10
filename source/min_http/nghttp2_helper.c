/*
 * nghttp2 - HTTP/2 C Library
 *
 * Copyright (c) 2012 Tatsuhiro Tsujikawa
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include "nghttp2_helper.h"

#include <assert.h>
#include <netinet/in.h>
#include <string.h>

#include "nghttp2_net.h"

void nghttp2_put_uint16be(uint8_t *buf, uint16_t n) {
  uint16_t x = htons(n);
  memcpy(buf, &x, sizeof(uint16_t));
}

void nghttp2_put_uint32be(uint8_t *buf, uint32_t n) {
  uint32_t x = htonl(n);
  memcpy(buf, &x, sizeof(uint32_t));
}

uint16_t nghttp2_get_uint16(const uint8_t *data) {
  uint16_t n;
  memcpy(&n, data, sizeof(uint16_t));
  return ntohs(n);
}

uint32_t nghttp2_get_uint32(const uint8_t *data) {
  uint32_t n;
  memcpy(&n, data, sizeof(uint32_t));
  return ntohl(n);
}

/* Generated by gendowncasetbl.py */
static const uint8_t DOWNCASE_TBL[] = {
  0 /* NUL  */,   1 /* SOH  */,   2 /* STX  */,   3 /* ETX  */,
  4 /* EOT  */,   5 /* ENQ  */,   6 /* ACK  */,   7 /* BEL  */,
  8 /* BS   */,   9 /* HT   */,   10 /* LF   */,  11 /* VT   */,
  12 /* FF   */,  13 /* CR   */,  14 /* SO   */,  15 /* SI   */,
  16 /* DLE  */,  17 /* DC1  */,  18 /* DC2  */,  19 /* DC3  */,
  20 /* DC4  */,  21 /* NAK  */,  22 /* SYN  */,  23 /* ETB  */,
  24 /* CAN  */,  25 /* EM   */,  26 /* SUB  */,  27 /* ESC  */,
  28 /* FS   */,  29 /* GS   */,  30 /* RS   */,  31 /* US   */,
  32 /* SPC  */,  33 /* !    */,  34 /* "    */,  35 /* #    */,
  36 /* $    */,  37 /* %    */,  38 /* &    */,  39 /* '    */,
  40 /* (    */,  41 /* )    */,  42 /* *    */,  43 /* +    */,
  44 /* ,    */,  45 /* -    */,  46 /* .    */,  47 /* /    */,
  48 /* 0    */,  49 /* 1    */,  50 /* 2    */,  51 /* 3    */,
  52 /* 4    */,  53 /* 5    */,  54 /* 6    */,  55 /* 7    */,
  56 /* 8    */,  57 /* 9    */,  58 /* :    */,  59 /* ;    */,
  60 /* <    */,  61 /* =    */,  62 /* >    */,  63 /* ?    */,
  64 /* @    */,  97 /* A    */,  98 /* B    */,  99 /* C    */,
  100 /* D    */, 101 /* E    */, 102 /* F    */, 103 /* G    */,
  104 /* H    */, 105 /* I    */, 106 /* J    */, 107 /* K    */,
  108 /* L    */, 109 /* M    */, 110 /* N    */, 111 /* O    */,
  112 /* P    */, 113 /* Q    */, 114 /* R    */, 115 /* S    */,
  116 /* T    */, 117 /* U    */, 118 /* V    */, 119 /* W    */,
  120 /* X    */, 121 /* Y    */, 122 /* Z    */, 91 /* [    */,
  92 /* \    */,  93 /* ]    */,  94 /* ^    */,  95 /* _    */,
  96 /* `    */,  97 /* a    */,  98 /* b    */,  99 /* c    */,
  100 /* d    */, 101 /* e    */, 102 /* f    */, 103 /* g    */,
  104 /* h    */, 105 /* i    */, 106 /* j    */, 107 /* k    */,
  108 /* l    */, 109 /* m    */, 110 /* n    */, 111 /* o    */,
  112 /* p    */, 113 /* q    */, 114 /* r    */, 115 /* s    */,
  116 /* t    */, 117 /* u    */, 118 /* v    */, 119 /* w    */,
  120 /* x    */, 121 /* y    */, 122 /* z    */, 123 /* {    */,
  124 /* |    */, 125 /* }    */, 126 /* ~    */, 127 /* DEL  */,
  128 /* 0x80 */, 129 /* 0x81 */, 130 /* 0x82 */, 131 /* 0x83 */,
  132 /* 0x84 */, 133 /* 0x85 */, 134 /* 0x86 */, 135 /* 0x87 */,
  136 /* 0x88 */, 137 /* 0x89 */, 138 /* 0x8a */, 139 /* 0x8b */,
  140 /* 0x8c */, 141 /* 0x8d */, 142 /* 0x8e */, 143 /* 0x8f */,
  144 /* 0x90 */, 145 /* 0x91 */, 146 /* 0x92 */, 147 /* 0x93 */,
  148 /* 0x94 */, 149 /* 0x95 */, 150 /* 0x96 */, 151 /* 0x97 */,
  152 /* 0x98 */, 153 /* 0x99 */, 154 /* 0x9a */, 155 /* 0x9b */,
  156 /* 0x9c */, 157 /* 0x9d */, 158 /* 0x9e */, 159 /* 0x9f */,
  160 /* 0xa0 */, 161 /* 0xa1 */, 162 /* 0xa2 */, 163 /* 0xa3 */,
  164 /* 0xa4 */, 165 /* 0xa5 */, 166 /* 0xa6 */, 167 /* 0xa7 */,
  168 /* 0xa8 */, 169 /* 0xa9 */, 170 /* 0xaa */, 171 /* 0xab */,
  172 /* 0xac */, 173 /* 0xad */, 174 /* 0xae */, 175 /* 0xaf */,
  176 /* 0xb0 */, 177 /* 0xb1 */, 178 /* 0xb2 */, 179 /* 0xb3 */,
  180 /* 0xb4 */, 181 /* 0xb5 */, 182 /* 0xb6 */, 183 /* 0xb7 */,
  184 /* 0xb8 */, 185 /* 0xb9 */, 186 /* 0xba */, 187 /* 0xbb */,
  188 /* 0xbc */, 189 /* 0xbd */, 190 /* 0xbe */, 191 /* 0xbf */,
  192 /* 0xc0 */, 193 /* 0xc1 */, 194 /* 0xc2 */, 195 /* 0xc3 */,
  196 /* 0xc4 */, 197 /* 0xc5 */, 198 /* 0xc6 */, 199 /* 0xc7 */,
  200 /* 0xc8 */, 201 /* 0xc9 */, 202 /* 0xca */, 203 /* 0xcb */,
  204 /* 0xcc */, 205 /* 0xcd */, 206 /* 0xce */, 207 /* 0xcf */,
  208 /* 0xd0 */, 209 /* 0xd1 */, 210 /* 0xd2 */, 211 /* 0xd3 */,
  212 /* 0xd4 */, 213 /* 0xd5 */, 214 /* 0xd6 */, 215 /* 0xd7 */,
  216 /* 0xd8 */, 217 /* 0xd9 */, 218 /* 0xda */, 219 /* 0xdb */,
  220 /* 0xdc */, 221 /* 0xdd */, 222 /* 0xde */, 223 /* 0xdf */,
  224 /* 0xe0 */, 225 /* 0xe1 */, 226 /* 0xe2 */, 227 /* 0xe3 */,
  228 /* 0xe4 */, 229 /* 0xe5 */, 230 /* 0xe6 */, 231 /* 0xe7 */,
  232 /* 0xe8 */, 233 /* 0xe9 */, 234 /* 0xea */, 235 /* 0xeb */,
  236 /* 0xec */, 237 /* 0xed */, 238 /* 0xee */, 239 /* 0xef */,
  240 /* 0xf0 */, 241 /* 0xf1 */, 242 /* 0xf2 */, 243 /* 0xf3 */,
  244 /* 0xf4 */, 245 /* 0xf5 */, 246 /* 0xf6 */, 247 /* 0xf7 */,
  248 /* 0xf8 */, 249 /* 0xf9 */, 250 /* 0xfa */, 251 /* 0xfb */,
  252 /* 0xfc */, 253 /* 0xfd */, 254 /* 0xfe */, 255 /* 0xff */,
};

void nghttp2_downcase(uint8_t *s, size_t len) {
  size_t i;
  for (i = 0; i < len; ++i) { s[i] = DOWNCASE_TBL[s[i]]; }
}

/*
 *   local_window_size
 *   ^  *
 *   |  *    recv_window_size
 *   |  *  * ^
 *   |  *  * |
 *  0+++++++++
 *   |  *  *   \
 *   |  *  *   | This rage is hidden in flow control.  But it must be
 *   v  *  *   / kept in order to restore it when window size is
 * enlarged. recv_reduction
 *   (+ for negative direction)
 *
 *   recv_window_size could be negative if we decrease
 *   local_window_size more than recv_window_size:
 *
 *   local_window_size
 *   ^  *
 *   |  *
 *   |  *
 *   0++++++++
 *   |  *    ^ recv_window_size (negative)
 *   |  *    |
 *   v  *  *
 *   recv_reduction
 */
int nghttp2_adjust_local_window_size(int32_t *local_window_size_ptr,
                                     int32_t *recv_window_size_ptr,
                                     int32_t *recv_reduction_ptr,
                                     int32_t *delta_ptr) {
  if (*delta_ptr > 0) {
    int32_t recv_reduction_delta;
    int32_t delta;
    int32_t new_recv_window_size = nghttp2_max(
                                       0, *recv_window_size_ptr) -
                                   *delta_ptr;

    if (new_recv_window_size >= 0) {
      *recv_window_size_ptr = new_recv_window_size;
      return 0;
    }

    delta = -new_recv_window_size;

    /* The delta size is strictly more than received bytes. Increase
       local_window_size by that difference |delta|. */
    if (*local_window_size_ptr > NGHTTP2_MAX_WINDOW_SIZE - delta) {
      return NGHTTP2_ERR_FLOW_CONTROL;
    }
    *local_window_size_ptr += delta;
    /* If there is recv_reduction due to earlier window_size
       reduction, we have to adjust it too. */
    recv_reduction_delta = nghttp2_min(*recv_reduction_ptr, delta);
    *recv_reduction_ptr -= recv_reduction_delta;
    if (*recv_window_size_ptr < 0) {
      *recv_window_size_ptr += recv_reduction_delta;
    } else {
      /* If *recv_window_size_ptr > 0, then those bytes are going to
         be returned to the remote peer (by WINDOW_UPDATE with the
         adjusted *delta_ptr), so it is effectively 0 now.  We set to
         *recv_reduction_delta, because caller does not take into
         account it in *delta_ptr. */
      *recv_window_size_ptr = recv_reduction_delta;
    }
    /* recv_reduction_delta must be paid from *delta_ptr, since it was
       added in window size reduction (see below). */
    *delta_ptr -= recv_reduction_delta;

    return 0;
  }

  if (*local_window_size_ptr + *delta_ptr < 0 ||
      *recv_window_size_ptr < INT32_MIN - *delta_ptr ||
      *recv_reduction_ptr > INT32_MAX + *delta_ptr) {
    return NGHTTP2_ERR_FLOW_CONTROL;
  }
  /* Decreasing local window size. Note that we achieve this without
     noticing to the remote peer. To do this, we cut
     recv_window_size by -delta. This means that we don't send
     WINDOW_UPDATE for -delta bytes. */
  *local_window_size_ptr += *delta_ptr;
  *recv_window_size_ptr += *delta_ptr;
  *recv_reduction_ptr -= *delta_ptr;
  *delta_ptr = 0;

  return 0;
}

int nghttp2_increase_local_window_size(int32_t *local_window_size_ptr,
                                       int32_t *recv_window_size_ptr,
                                       int32_t *recv_reduction_ptr,
                                       int32_t *delta_ptr) {
  int32_t recv_reduction_delta;
  int32_t delta;

  delta = *delta_ptr;

  assert(delta >= 0);

  /* The delta size is strictly more than received bytes. Increase
     local_window_size by that difference |delta|. */
  if (*local_window_size_ptr > NGHTTP2_MAX_WINDOW_SIZE - delta) {
    return NGHTTP2_ERR_FLOW_CONTROL;
  }

  *local_window_size_ptr += delta;
  /* If there is recv_reduction due to earlier window_size
     reduction, we have to adjust it too. */
  recv_reduction_delta = nghttp2_min(*recv_reduction_ptr, delta);
  *recv_reduction_ptr -= recv_reduction_delta;

  *recv_window_size_ptr += recv_reduction_delta;

  /* recv_reduction_delta must be paid from *delta_ptr, since it was
     added in window size reduction (see below). */
  *delta_ptr -= recv_reduction_delta;

  return 0;
}

int nghttp2_should_send_window_update(int32_t local_window_size,
                                      int32_t recv_window_size) {
  return recv_window_size > 0 &&
         recv_window_size >= local_window_size / 2;
}

const char *nghttp2_strerror(int error_code) {
  switch (error_code) {
    case 0: return "Success";
    case NGHTTP2_ERR_INVALID_ARGUMENT: return "Invalid argument";
    case NGHTTP2_ERR_BUFFER_ERROR: return "Out of buffer space";
    case NGHTTP2_ERR_UNSUPPORTED_VERSION:
      return "Unsupported SPDY version";
    case NGHTTP2_ERR_WOULDBLOCK: return "Operation would block";
    case NGHTTP2_ERR_PROTO: return "Protocol error";
    case NGHTTP2_ERR_INVALID_FRAME: return "Invalid frame octets";
    case NGHTTP2_ERR_EOF: return "EOF";
    case NGHTTP2_ERR_DEFERRED: return "Data transfer deferred";
    case NGHTTP2_ERR_STREAM_ID_NOT_AVAILABLE:
      return "No more Stream ID available";
    case NGHTTP2_ERR_STREAM_CLOSED:
      return "Stream was already closed or invalid";
    case NGHTTP2_ERR_STREAM_CLOSING: return "Stream is closing";
    case NGHTTP2_ERR_STREAM_SHUT_WR:
      return "The transmission is not allowed for this stream";
    case NGHTTP2_ERR_INVALID_STREAM_ID: return "Stream ID is invalid";
    case NGHTTP2_ERR_INVALID_STREAM_STATE:
      return "Invalid stream state";
    case NGHTTP2_ERR_DEFERRED_DATA_EXIST:
      return "Another DATA frame has already been deferred";
    case NGHTTP2_ERR_START_STREAM_NOT_ALLOWED:
      return "request HEADERS is not allowed";
    case NGHTTP2_ERR_GOAWAY_ALREADY_SENT:
      return "GOAWAY has already been sent";
    case NGHTTP2_ERR_INVALID_HEADER_BLOCK:
      return "Invalid header block";
    case NGHTTP2_ERR_INVALID_STATE: return "Invalid state";
    case NGHTTP2_ERR_TEMPORAL_CALLBACK_FAILURE:
      return "The user callback function failed due to the temporal "
             "error";
    case NGHTTP2_ERR_FRAME_SIZE_ERROR:
      return "The length of the frame is invalid";
    case NGHTTP2_ERR_HEADER_COMP:
      return "Header compression/decompression error";
    case NGHTTP2_ERR_FLOW_CONTROL: return "Flow control error";
    case NGHTTP2_ERR_INSUFF_BUFSIZE:
      return "Insufficient buffer size given to function";
    case NGHTTP2_ERR_PAUSE:
      return "Callback was paused by the application";
    case NGHTTP2_ERR_TOO_MANY_INFLIGHT_SETTINGS:
      return "Too many inflight SETTINGS";
    case NGHTTP2_ERR_PUSH_DISABLED:
      return "Server push is disabled by peer";
    case NGHTTP2_ERR_DATA_EXIST:
      return "DATA or HEADERS frame has already been submitted for "
             "the stream";
    case NGHTTP2_ERR_SESSION_CLOSING:
      return "The current session is closing";
    case NGHTTP2_ERR_HTTP_HEADER:
      return "Invalid HTTP header field was received";
    case NGHTTP2_ERR_HTTP_MESSAGING:
      return "Violation in HTTP messaging rule";
    case NGHTTP2_ERR_REFUSED_STREAM: return "Stream was refused";
    case NGHTTP2_ERR_INTERNAL: return "Internal error";
    case NGHTTP2_ERR_CANCEL: return "Cancel";
    case NGHTTP2_ERR_SETTINGS_EXPECTED:
      return "When a local endpoint expects to receive SETTINGS "
             "frame, it "
             "receives an other type of frame";
    case NGHTTP2_ERR_NOMEM: return "Out of memory";
    case NGHTTP2_ERR_CALLBACK_FAILURE:
      return "The user callback function failed";
    case NGHTTP2_ERR_BAD_CLIENT_MAGIC:
      return "Received bad client magic byte string";
    case NGHTTP2_ERR_FLOODED:
      return "Flooding was detected in this HTTP/2 session, and it "
             "must be "
             "closed";
    case NGHTTP2_ERR_TOO_MANY_SETTINGS:
      return "SETTINGS frame contained more than the maximum allowed "
             "entries";
    default: return "Unknown error code";
  }
}

/* Generated by gennmchartbl.py */
static const int VALID_HD_NAME_CHARS[] = {
  0 /* NUL  */, 0 /* SOH  */, 0 /* STX  */, 0 /* ETX  */,
  0 /* EOT  */, 0 /* ENQ  */, 0 /* ACK  */, 0 /* BEL  */,
  0 /* BS   */, 0 /* HT   */, 0 /* LF   */, 0 /* VT   */,
  0 /* FF   */, 0 /* CR   */, 0 /* SO   */, 0 /* SI   */,
  0 /* DLE  */, 0 /* DC1  */, 0 /* DC2  */, 0 /* DC3  */,
  0 /* DC4  */, 0 /* NAK  */, 0 /* SYN  */, 0 /* ETB  */,
  0 /* CAN  */, 0 /* EM   */, 0 /* SUB  */, 0 /* ESC  */,
  0 /* FS   */, 0 /* GS   */, 0 /* RS   */, 0 /* US   */,
  0 /* SPC  */, 1 /* !    */, 0 /* "    */, 1 /* #    */,
  1 /* $    */, 1 /* %    */, 1 /* &    */, 1 /* '    */,
  0 /* (    */, 0 /* )    */, 1 /* *    */, 1 /* +    */,
  0 /* ,    */, 1 /* -    */, 1 /* .    */, 0 /* /    */,
  1 /* 0    */, 1 /* 1    */, 1 /* 2    */, 1 /* 3    */,
  1 /* 4    */, 1 /* 5    */, 1 /* 6    */, 1 /* 7    */,
  1 /* 8    */, 1 /* 9    */, 0 /* :    */, 0 /* ;    */,
  0 /* <    */, 0 /* =    */, 0 /* >    */, 0 /* ?    */,
  0 /* @    */, 0 /* A    */, 0 /* B    */, 0 /* C    */,
  0 /* D    */, 0 /* E    */, 0 /* F    */, 0 /* G    */,
  0 /* H    */, 0 /* I    */, 0 /* J    */, 0 /* K    */,
  0 /* L    */, 0 /* M    */, 0 /* N    */, 0 /* O    */,
  0 /* P    */, 0 /* Q    */, 0 /* R    */, 0 /* S    */,
  0 /* T    */, 0 /* U    */, 0 /* V    */, 0 /* W    */,
  0 /* X    */, 0 /* Y    */, 0 /* Z    */, 0 /* [    */,
  0 /* \    */, 0 /* ]    */, 1 /* ^    */, 1 /* _    */,
  1 /* `    */, 1 /* a    */, 1 /* b    */, 1 /* c    */,
  1 /* d    */, 1 /* e    */, 1 /* f    */, 1 /* g    */,
  1 /* h    */, 1 /* i    */, 1 /* j    */, 1 /* k    */,
  1 /* l    */, 1 /* m    */, 1 /* n    */, 1 /* o    */,
  1 /* p    */, 1 /* q    */, 1 /* r    */, 1 /* s    */,
  1 /* t    */, 1 /* u    */, 1 /* v    */, 1 /* w    */,
  1 /* x    */, 1 /* y    */, 1 /* z    */, 0 /* {    */,
  1 /* |    */, 0 /* }    */, 1 /* ~    */, 0 /* DEL  */,
  0 /* 0x80 */, 0 /* 0x81 */, 0 /* 0x82 */, 0 /* 0x83 */,
  0 /* 0x84 */, 0 /* 0x85 */, 0 /* 0x86 */, 0 /* 0x87 */,
  0 /* 0x88 */, 0 /* 0x89 */, 0 /* 0x8a */, 0 /* 0x8b */,
  0 /* 0x8c */, 0 /* 0x8d */, 0 /* 0x8e */, 0 /* 0x8f */,
  0 /* 0x90 */, 0 /* 0x91 */, 0 /* 0x92 */, 0 /* 0x93 */,
  0 /* 0x94 */, 0 /* 0x95 */, 0 /* 0x96 */, 0 /* 0x97 */,
  0 /* 0x98 */, 0 /* 0x99 */, 0 /* 0x9a */, 0 /* 0x9b */,
  0 /* 0x9c */, 0 /* 0x9d */, 0 /* 0x9e */, 0 /* 0x9f */,
  0 /* 0xa0 */, 0 /* 0xa1 */, 0 /* 0xa2 */, 0 /* 0xa3 */,
  0 /* 0xa4 */, 0 /* 0xa5 */, 0 /* 0xa6 */, 0 /* 0xa7 */,
  0 /* 0xa8 */, 0 /* 0xa9 */, 0 /* 0xaa */, 0 /* 0xab */,
  0 /* 0xac */, 0 /* 0xad */, 0 /* 0xae */, 0 /* 0xaf */,
  0 /* 0xb0 */, 0 /* 0xb1 */, 0 /* 0xb2 */, 0 /* 0xb3 */,
  0 /* 0xb4 */, 0 /* 0xb5 */, 0 /* 0xb6 */, 0 /* 0xb7 */,
  0 /* 0xb8 */, 0 /* 0xb9 */, 0 /* 0xba */, 0 /* 0xbb */,
  0 /* 0xbc */, 0 /* 0xbd */, 0 /* 0xbe */, 0 /* 0xbf */,
  0 /* 0xc0 */, 0 /* 0xc1 */, 0 /* 0xc2 */, 0 /* 0xc3 */,
  0 /* 0xc4 */, 0 /* 0xc5 */, 0 /* 0xc6 */, 0 /* 0xc7 */,
  0 /* 0xc8 */, 0 /* 0xc9 */, 0 /* 0xca */, 0 /* 0xcb */,
  0 /* 0xcc */, 0 /* 0xcd */, 0 /* 0xce */, 0 /* 0xcf */,
  0 /* 0xd0 */, 0 /* 0xd1 */, 0 /* 0xd2 */, 0 /* 0xd3 */,
  0 /* 0xd4 */, 0 /* 0xd5 */, 0 /* 0xd6 */, 0 /* 0xd7 */,
  0 /* 0xd8 */, 0 /* 0xd9 */, 0 /* 0xda */, 0 /* 0xdb */,
  0 /* 0xdc */, 0 /* 0xdd */, 0 /* 0xde */, 0 /* 0xdf */,
  0 /* 0xe0 */, 0 /* 0xe1 */, 0 /* 0xe2 */, 0 /* 0xe3 */,
  0 /* 0xe4 */, 0 /* 0xe5 */, 0 /* 0xe6 */, 0 /* 0xe7 */,
  0 /* 0xe8 */, 0 /* 0xe9 */, 0 /* 0xea */, 0 /* 0xeb */,
  0 /* 0xec */, 0 /* 0xed */, 0 /* 0xee */, 0 /* 0xef */,
  0 /* 0xf0 */, 0 /* 0xf1 */, 0 /* 0xf2 */, 0 /* 0xf3 */,
  0 /* 0xf4 */, 0 /* 0xf5 */, 0 /* 0xf6 */, 0 /* 0xf7 */,
  0 /* 0xf8 */, 0 /* 0xf9 */, 0 /* 0xfa */, 0 /* 0xfb */,
  0 /* 0xfc */, 0 /* 0xfd */, 0 /* 0xfe */, 0 /* 0xff */
};

int nghttp2_check_header_name(const uint8_t *name, size_t len) {
  const uint8_t *last;
  if (len == 0) {
    return 0;
  }
  if (*name == ':') {
    if (len == 1) {
      return 0;
    }
    ++name;
    --len;
  }
  for (last = name + len; name != last; ++name) {
    if (!VALID_HD_NAME_CHARS[*name]) {
      return 0;
    }
  }
  return 1;
}

/* Generated by genvchartbl.py */
static const int VALID_HD_VALUE_CHARS[] = {
  0 /* NUL  */, 0 /* SOH  */, 0 /* STX  */, 0 /* ETX  */,
  0 /* EOT  */, 0 /* ENQ  */, 0 /* ACK  */, 0 /* BEL  */,
  0 /* BS   */, 1 /* HT   */, 0 /* LF   */, 0 /* VT   */,
  0 /* FF   */, 0 /* CR   */, 0 /* SO   */, 0 /* SI   */,
  0 /* DLE  */, 0 /* DC1  */, 0 /* DC2  */, 0 /* DC3  */,
  0 /* DC4  */, 0 /* NAK  */, 0 /* SYN  */, 0 /* ETB  */,
  0 /* CAN  */, 0 /* EM   */, 0 /* SUB  */, 0 /* ESC  */,
  0 /* FS   */, 0 /* GS   */, 0 /* RS   */, 0 /* US   */,
  1 /* SPC  */, 1 /* !    */, 1 /* "    */, 1 /* #    */,
  1 /* $    */, 1 /* %    */, 1 /* &    */, 1 /* '    */,
  1 /* (    */, 1 /* )    */, 1 /* *    */, 1 /* +    */,
  1 /* ,    */, 1 /* -    */, 1 /* .    */, 1 /* /    */,
  1 /* 0    */, 1 /* 1    */, 1 /* 2    */, 1 /* 3    */,
  1 /* 4    */, 1 /* 5    */, 1 /* 6    */, 1 /* 7    */,
  1 /* 8    */, 1 /* 9    */, 1 /* :    */, 1 /* ;    */,
  1 /* <    */, 1 /* =    */, 1 /* >    */, 1 /* ?    */,
  1 /* @    */, 1 /* A    */, 1 /* B    */, 1 /* C    */,
  1 /* D    */, 1 /* E    */, 1 /* F    */, 1 /* G    */,
  1 /* H    */, 1 /* I    */, 1 /* J    */, 1 /* K    */,
  1 /* L    */, 1 /* M    */, 1 /* N    */, 1 /* O    */,
  1 /* P    */, 1 /* Q    */, 1 /* R    */, 1 /* S    */,
  1 /* T    */, 1 /* U    */, 1 /* V    */, 1 /* W    */,
  1 /* X    */, 1 /* Y    */, 1 /* Z    */, 1 /* [    */,
  1 /* \    */, 1 /* ]    */, 1 /* ^    */, 1 /* _    */,
  1 /* `    */, 1 /* a    */, 1 /* b    */, 1 /* c    */,
  1 /* d    */, 1 /* e    */, 1 /* f    */, 1 /* g    */,
  1 /* h    */, 1 /* i    */, 1 /* j    */, 1 /* k    */,
  1 /* l    */, 1 /* m    */, 1 /* n    */, 1 /* o    */,
  1 /* p    */, 1 /* q    */, 1 /* r    */, 1 /* s    */,
  1 /* t    */, 1 /* u    */, 1 /* v    */, 1 /* w    */,
  1 /* x    */, 1 /* y    */, 1 /* z    */, 1 /* {    */,
  1 /* |    */, 1 /* }    */, 1 /* ~    */, 0 /* DEL  */,
  1 /* 0x80 */, 1 /* 0x81 */, 1 /* 0x82 */, 1 /* 0x83 */,
  1 /* 0x84 */, 1 /* 0x85 */, 1 /* 0x86 */, 1 /* 0x87 */,
  1 /* 0x88 */, 1 /* 0x89 */, 1 /* 0x8a */, 1 /* 0x8b */,
  1 /* 0x8c */, 1 /* 0x8d */, 1 /* 0x8e */, 1 /* 0x8f */,
  1 /* 0x90 */, 1 /* 0x91 */, 1 /* 0x92 */, 1 /* 0x93 */,
  1 /* 0x94 */, 1 /* 0x95 */, 1 /* 0x96 */, 1 /* 0x97 */,
  1 /* 0x98 */, 1 /* 0x99 */, 1 /* 0x9a */, 1 /* 0x9b */,
  1 /* 0x9c */, 1 /* 0x9d */, 1 /* 0x9e */, 1 /* 0x9f */,
  1 /* 0xa0 */, 1 /* 0xa1 */, 1 /* 0xa2 */, 1 /* 0xa3 */,
  1 /* 0xa4 */, 1 /* 0xa5 */, 1 /* 0xa6 */, 1 /* 0xa7 */,
  1 /* 0xa8 */, 1 /* 0xa9 */, 1 /* 0xaa */, 1 /* 0xab */,
  1 /* 0xac */, 1 /* 0xad */, 1 /* 0xae */, 1 /* 0xaf */,
  1 /* 0xb0 */, 1 /* 0xb1 */, 1 /* 0xb2 */, 1 /* 0xb3 */,
  1 /* 0xb4 */, 1 /* 0xb5 */, 1 /* 0xb6 */, 1 /* 0xb7 */,
  1 /* 0xb8 */, 1 /* 0xb9 */, 1 /* 0xba */, 1 /* 0xbb */,
  1 /* 0xbc */, 1 /* 0xbd */, 1 /* 0xbe */, 1 /* 0xbf */,
  1 /* 0xc0 */, 1 /* 0xc1 */, 1 /* 0xc2 */, 1 /* 0xc3 */,
  1 /* 0xc4 */, 1 /* 0xc5 */, 1 /* 0xc6 */, 1 /* 0xc7 */,
  1 /* 0xc8 */, 1 /* 0xc9 */, 1 /* 0xca */, 1 /* 0xcb */,
  1 /* 0xcc */, 1 /* 0xcd */, 1 /* 0xce */, 1 /* 0xcf */,
  1 /* 0xd0 */, 1 /* 0xd1 */, 1 /* 0xd2 */, 1 /* 0xd3 */,
  1 /* 0xd4 */, 1 /* 0xd5 */, 1 /* 0xd6 */, 1 /* 0xd7 */,
  1 /* 0xd8 */, 1 /* 0xd9 */, 1 /* 0xda */, 1 /* 0xdb */,
  1 /* 0xdc */, 1 /* 0xdd */, 1 /* 0xde */, 1 /* 0xdf */,
  1 /* 0xe0 */, 1 /* 0xe1 */, 1 /* 0xe2 */, 1 /* 0xe3 */,
  1 /* 0xe4 */, 1 /* 0xe5 */, 1 /* 0xe6 */, 1 /* 0xe7 */,
  1 /* 0xe8 */, 1 /* 0xe9 */, 1 /* 0xea */, 1 /* 0xeb */,
  1 /* 0xec */, 1 /* 0xed */, 1 /* 0xee */, 1 /* 0xef */,
  1 /* 0xf0 */, 1 /* 0xf1 */, 1 /* 0xf2 */, 1 /* 0xf3 */,
  1 /* 0xf4 */, 1 /* 0xf5 */, 1 /* 0xf6 */, 1 /* 0xf7 */,
  1 /* 0xf8 */, 1 /* 0xf9 */, 1 /* 0xfa */, 1 /* 0xfb */,
  1 /* 0xfc */, 1 /* 0xfd */, 1 /* 0xfe */, 1 /* 0xff */
};

int nghttp2_check_header_value(const uint8_t *value, size_t len) {
  const uint8_t *last;
  for (last = value + len; value != last; ++value) {
    if (!VALID_HD_VALUE_CHARS[*value]) {
      return 0;
    }
  }
  return 1;
}

int nghttp2_check_header_value_rfc9113(const uint8_t *value,
                                       size_t         len) {
  if (len == 0) {
    return 1;
  }

  if (*value == ' ' || *value == '\t' || *(value + len - 1) == ' ' ||
      *(value + len - 1) == '\t') {
    return 0;
  }

  return nghttp2_check_header_value(value, len);
}

/* Generated by genmethodchartbl.py */
static char VALID_METHOD_CHARS[] = {
  0 /* NUL  */, 0 /* SOH  */, 0 /* STX  */, 0 /* ETX  */,
  0 /* EOT  */, 0 /* ENQ  */, 0 /* ACK  */, 0 /* BEL  */,
  0 /* BS   */, 0 /* HT   */, 0 /* LF   */, 0 /* VT   */,
  0 /* FF   */, 0 /* CR   */, 0 /* SO   */, 0 /* SI   */,
  0 /* DLE  */, 0 /* DC1  */, 0 /* DC2  */, 0 /* DC3  */,
  0 /* DC4  */, 0 /* NAK  */, 0 /* SYN  */, 0 /* ETB  */,
  0 /* CAN  */, 0 /* EM   */, 0 /* SUB  */, 0 /* ESC  */,
  0 /* FS   */, 0 /* GS   */, 0 /* RS   */, 0 /* US   */,
  0 /* SPC  */, 1 /* !    */, 0 /* "    */, 1 /* #    */,
  1 /* $    */, 1 /* %    */, 1 /* &    */, 1 /* '    */,
  0 /* (    */, 0 /* )    */, 1 /* *    */, 1 /* +    */,
  0 /* ,    */, 1 /* -    */, 1 /* .    */, 0 /* /    */,
  1 /* 0    */, 1 /* 1    */, 1 /* 2    */, 1 /* 3    */,
  1 /* 4    */, 1 /* 5    */, 1 /* 6    */, 1 /* 7    */,
  1 /* 8    */, 1 /* 9    */, 0 /* :    */, 0 /* ;    */,
  0 /* <    */, 0 /* =    */, 0 /* >    */, 0 /* ?    */,
  0 /* @    */, 1 /* A    */, 1 /* B    */, 1 /* C    */,
  1 /* D    */, 1 /* E    */, 1 /* F    */, 1 /* G    */,
  1 /* H    */, 1 /* I    */, 1 /* J    */, 1 /* K    */,
  1 /* L    */, 1 /* M    */, 1 /* N    */, 1 /* O    */,
  1 /* P    */, 1 /* Q    */, 1 /* R    */, 1 /* S    */,
  1 /* T    */, 1 /* U    */, 1 /* V    */, 1 /* W    */,
  1 /* X    */, 1 /* Y    */, 1 /* Z    */, 0 /* [    */,
  0 /* \    */, 0 /* ]    */, 1 /* ^    */, 1 /* _    */,
  1 /* `    */, 1 /* a    */, 1 /* b    */, 1 /* c    */,
  1 /* d    */, 1 /* e    */, 1 /* f    */, 1 /* g    */,
  1 /* h    */, 1 /* i    */, 1 /* j    */, 1 /* k    */,
  1 /* l    */, 1 /* m    */, 1 /* n    */, 1 /* o    */,
  1 /* p    */, 1 /* q    */, 1 /* r    */, 1 /* s    */,
  1 /* t    */, 1 /* u    */, 1 /* v    */, 1 /* w    */,
  1 /* x    */, 1 /* y    */, 1 /* z    */, 0 /* {    */,
  1 /* |    */, 0 /* }    */, 1 /* ~    */, 0 /* DEL  */,
  0 /* 0x80 */, 0 /* 0x81 */, 0 /* 0x82 */, 0 /* 0x83 */,
  0 /* 0x84 */, 0 /* 0x85 */, 0 /* 0x86 */, 0 /* 0x87 */,
  0 /* 0x88 */, 0 /* 0x89 */, 0 /* 0x8a */, 0 /* 0x8b */,
  0 /* 0x8c */, 0 /* 0x8d */, 0 /* 0x8e */, 0 /* 0x8f */,
  0 /* 0x90 */, 0 /* 0x91 */, 0 /* 0x92 */, 0 /* 0x93 */,
  0 /* 0x94 */, 0 /* 0x95 */, 0 /* 0x96 */, 0 /* 0x97 */,
  0 /* 0x98 */, 0 /* 0x99 */, 0 /* 0x9a */, 0 /* 0x9b */,
  0 /* 0x9c */, 0 /* 0x9d */, 0 /* 0x9e */, 0 /* 0x9f */,
  0 /* 0xa0 */, 0 /* 0xa1 */, 0 /* 0xa2 */, 0 /* 0xa3 */,
  0 /* 0xa4 */, 0 /* 0xa5 */, 0 /* 0xa6 */, 0 /* 0xa7 */,
  0 /* 0xa8 */, 0 /* 0xa9 */, 0 /* 0xaa */, 0 /* 0xab */,
  0 /* 0xac */, 0 /* 0xad */, 0 /* 0xae */, 0 /* 0xaf */,
  0 /* 0xb0 */, 0 /* 0xb1 */, 0 /* 0xb2 */, 0 /* 0xb3 */,
  0 /* 0xb4 */, 0 /* 0xb5 */, 0 /* 0xb6 */, 0 /* 0xb7 */,
  0 /* 0xb8 */, 0 /* 0xb9 */, 0 /* 0xba */, 0 /* 0xbb */,
  0 /* 0xbc */, 0 /* 0xbd */, 0 /* 0xbe */, 0 /* 0xbf */,
  0 /* 0xc0 */, 0 /* 0xc1 */, 0 /* 0xc2 */, 0 /* 0xc3 */,
  0 /* 0xc4 */, 0 /* 0xc5 */, 0 /* 0xc6 */, 0 /* 0xc7 */,
  0 /* 0xc8 */, 0 /* 0xc9 */, 0 /* 0xca */, 0 /* 0xcb */,
  0 /* 0xcc */, 0 /* 0xcd */, 0 /* 0xce */, 0 /* 0xcf */,
  0 /* 0xd0 */, 0 /* 0xd1 */, 0 /* 0xd2 */, 0 /* 0xd3 */,
  0 /* 0xd4 */, 0 /* 0xd5 */, 0 /* 0xd6 */, 0 /* 0xd7 */,
  0 /* 0xd8 */, 0 /* 0xd9 */, 0 /* 0xda */, 0 /* 0xdb */,
  0 /* 0xdc */, 0 /* 0xdd */, 0 /* 0xde */, 0 /* 0xdf */,
  0 /* 0xe0 */, 0 /* 0xe1 */, 0 /* 0xe2 */, 0 /* 0xe3 */,
  0 /* 0xe4 */, 0 /* 0xe5 */, 0 /* 0xe6 */, 0 /* 0xe7 */,
  0 /* 0xe8 */, 0 /* 0xe9 */, 0 /* 0xea */, 0 /* 0xeb */,
  0 /* 0xec */, 0 /* 0xed */, 0 /* 0xee */, 0 /* 0xef */,
  0 /* 0xf0 */, 0 /* 0xf1 */, 0 /* 0xf2 */, 0 /* 0xf3 */,
  0 /* 0xf4 */, 0 /* 0xf5 */, 0 /* 0xf6 */, 0 /* 0xf7 */,
  0 /* 0xf8 */, 0 /* 0xf9 */, 0 /* 0xfa */, 0 /* 0xfb */,
  0 /* 0xfc */, 0 /* 0xfd */, 0 /* 0xfe */, 0 /* 0xff */
};

int nghttp2_check_method(const uint8_t *value, size_t len) {
  const uint8_t *last;
  if (len == 0) {
    return 0;
  }
  for (last = value + len; value != last; ++value) {
    if (!VALID_METHOD_CHARS[*value]) {
      return 0;
    }
  }
  return 1;
}

/* Generated by genpathchartbl.py */
static char VALID_PATH_CHARS[] = {
  0 /* NUL  */, 0 /* SOH  */, 0 /* STX  */, 0 /* ETX  */,
  0 /* EOT  */, 0 /* ENQ  */, 0 /* ACK  */, 0 /* BEL  */,
  0 /* BS   */, 0 /* HT   */, 0 /* LF   */, 0 /* VT   */,
  0 /* FF   */, 0 /* CR   */, 0 /* SO   */, 0 /* SI   */,
  0 /* DLE  */, 0 /* DC1  */, 0 /* DC2  */, 0 /* DC3  */,
  0 /* DC4  */, 0 /* NAK  */, 0 /* SYN  */, 0 /* ETB  */,
  0 /* CAN  */, 0 /* EM   */, 0 /* SUB  */, 0 /* ESC  */,
  0 /* FS   */, 0 /* GS   */, 0 /* RS   */, 0 /* US   */,
  0 /* SPC  */, 1 /* !    */, 1 /* "    */, 1 /* #    */,
  1 /* $    */, 1 /* %    */, 1 /* &    */, 1 /* '    */,
  1 /* (    */, 1 /* )    */, 1 /* *    */, 1 /* +    */,
  1 /* ,    */, 1 /* -    */, 1 /* .    */, 1 /* /    */,
  1 /* 0    */, 1 /* 1    */, 1 /* 2    */, 1 /* 3    */,
  1 /* 4    */, 1 /* 5    */, 1 /* 6    */, 1 /* 7    */,
  1 /* 8    */, 1 /* 9    */, 1 /* :    */, 1 /* ;    */,
  1 /* <    */, 1 /* =    */, 1 /* >    */, 1 /* ?    */,
  1 /* @    */, 1 /* A    */, 1 /* B    */, 1 /* C    */,
  1 /* D    */, 1 /* E    */, 1 /* F    */, 1 /* G    */,
  1 /* H    */, 1 /* I    */, 1 /* J    */, 1 /* K    */,
  1 /* L    */, 1 /* M    */, 1 /* N    */, 1 /* O    */,
  1 /* P    */, 1 /* Q    */, 1 /* R    */, 1 /* S    */,
  1 /* T    */, 1 /* U    */, 1 /* V    */, 1 /* W    */,
  1 /* X    */, 1 /* Y    */, 1 /* Z    */, 1 /* [    */,
  1 /* \    */, 1 /* ]    */, 1 /* ^    */, 1 /* _    */,
  1 /* `    */, 1 /* a    */, 1 /* b    */, 1 /* c    */,
  1 /* d    */, 1 /* e    */, 1 /* f    */, 1 /* g    */,
  1 /* h    */, 1 /* i    */, 1 /* j    */, 1 /* k    */,
  1 /* l    */, 1 /* m    */, 1 /* n    */, 1 /* o    */,
  1 /* p    */, 1 /* q    */, 1 /* r    */, 1 /* s    */,
  1 /* t    */, 1 /* u    */, 1 /* v    */, 1 /* w    */,
  1 /* x    */, 1 /* y    */, 1 /* z    */, 1 /* {    */,
  1 /* |    */, 1 /* }    */, 1 /* ~    */, 0 /* DEL  */,
  1 /* 0x80 */, 1 /* 0x81 */, 1 /* 0x82 */, 1 /* 0x83 */,
  1 /* 0x84 */, 1 /* 0x85 */, 1 /* 0x86 */, 1 /* 0x87 */,
  1 /* 0x88 */, 1 /* 0x89 */, 1 /* 0x8a */, 1 /* 0x8b */,
  1 /* 0x8c */, 1 /* 0x8d */, 1 /* 0x8e */, 1 /* 0x8f */,
  1 /* 0x90 */, 1 /* 0x91 */, 1 /* 0x92 */, 1 /* 0x93 */,
  1 /* 0x94 */, 1 /* 0x95 */, 1 /* 0x96 */, 1 /* 0x97 */,
  1 /* 0x98 */, 1 /* 0x99 */, 1 /* 0x9a */, 1 /* 0x9b */,
  1 /* 0x9c */, 1 /* 0x9d */, 1 /* 0x9e */, 1 /* 0x9f */,
  1 /* 0xa0 */, 1 /* 0xa1 */, 1 /* 0xa2 */, 1 /* 0xa3 */,
  1 /* 0xa4 */, 1 /* 0xa5 */, 1 /* 0xa6 */, 1 /* 0xa7 */,
  1 /* 0xa8 */, 1 /* 0xa9 */, 1 /* 0xaa */, 1 /* 0xab */,
  1 /* 0xac */, 1 /* 0xad */, 1 /* 0xae */, 1 /* 0xaf */,
  1 /* 0xb0 */, 1 /* 0xb1 */, 1 /* 0xb2 */, 1 /* 0xb3 */,
  1 /* 0xb4 */, 1 /* 0xb5 */, 1 /* 0xb6 */, 1 /* 0xb7 */,
  1 /* 0xb8 */, 1 /* 0xb9 */, 1 /* 0xba */, 1 /* 0xbb */,
  1 /* 0xbc */, 1 /* 0xbd */, 1 /* 0xbe */, 1 /* 0xbf */,
  1 /* 0xc0 */, 1 /* 0xc1 */, 1 /* 0xc2 */, 1 /* 0xc3 */,
  1 /* 0xc4 */, 1 /* 0xc5 */, 1 /* 0xc6 */, 1 /* 0xc7 */,
  1 /* 0xc8 */, 1 /* 0xc9 */, 1 /* 0xca */, 1 /* 0xcb */,
  1 /* 0xcc */, 1 /* 0xcd */, 1 /* 0xce */, 1 /* 0xcf */,
  1 /* 0xd0 */, 1 /* 0xd1 */, 1 /* 0xd2 */, 1 /* 0xd3 */,
  1 /* 0xd4 */, 1 /* 0xd5 */, 1 /* 0xd6 */, 1 /* 0xd7 */,
  1 /* 0xd8 */, 1 /* 0xd9 */, 1 /* 0xda */, 1 /* 0xdb */,
  1 /* 0xdc */, 1 /* 0xdd */, 1 /* 0xde */, 1 /* 0xdf */,
  1 /* 0xe0 */, 1 /* 0xe1 */, 1 /* 0xe2 */, 1 /* 0xe3 */,
  1 /* 0xe4 */, 1 /* 0xe5 */, 1 /* 0xe6 */, 1 /* 0xe7 */,
  1 /* 0xe8 */, 1 /* 0xe9 */, 1 /* 0xea */, 1 /* 0xeb */,
  1 /* 0xec */, 1 /* 0xed */, 1 /* 0xee */, 1 /* 0xef */,
  1 /* 0xf0 */, 1 /* 0xf1 */, 1 /* 0xf2 */, 1 /* 0xf3 */,
  1 /* 0xf4 */, 1 /* 0xf5 */, 1 /* 0xf6 */, 1 /* 0xf7 */,
  1 /* 0xf8 */, 1 /* 0xf9 */, 1 /* 0xfa */, 1 /* 0xfb */,
  1 /* 0xfc */, 1 /* 0xfd */, 1 /* 0xfe */, 1 /* 0xff */
};

int nghttp2_check_path(const uint8_t *value, size_t len) {
  const uint8_t *last;
  for (last = value + len; value != last; ++value) {
    if (!VALID_PATH_CHARS[*value]) {
      return 0;
    }
  }
  return 1;
}

/* Generated by genauthoritychartbl.py */
static char VALID_AUTHORITY_CHARS[] = {
  0 /* NUL  */, 0 /* SOH  */, 0 /* STX  */, 0 /* ETX  */,
  0 /* EOT  */, 0 /* ENQ  */, 0 /* ACK  */, 0 /* BEL  */,
  0 /* BS   */, 0 /* HT   */, 0 /* LF   */, 0 /* VT   */,
  0 /* FF   */, 0 /* CR   */, 0 /* SO   */, 0 /* SI   */,
  0 /* DLE  */, 0 /* DC1  */, 0 /* DC2  */, 0 /* DC3  */,
  0 /* DC4  */, 0 /* NAK  */, 0 /* SYN  */, 0 /* ETB  */,
  0 /* CAN  */, 0 /* EM   */, 0 /* SUB  */, 0 /* ESC  */,
  0 /* FS   */, 0 /* GS   */, 0 /* RS   */, 0 /* US   */,
  0 /* SPC  */, 1 /* !    */, 0 /* "    */, 0 /* #    */,
  1 /* $    */, 1 /* %    */, 1 /* &    */, 1 /* '    */,
  1 /* (    */, 1 /* )    */, 1 /* *    */, 1 /* +    */,
  1 /* ,    */, 1 /* -    */, 1 /* .    */, 0 /* /    */,
  1 /* 0    */, 1 /* 1    */, 1 /* 2    */, 1 /* 3    */,
  1 /* 4    */, 1 /* 5    */, 1 /* 6    */, 1 /* 7    */,
  1 /* 8    */, 1 /* 9    */, 1 /* :    */, 1 /* ;    */,
  0 /* <    */, 1 /* =    */, 0 /* >    */, 0 /* ?    */,
  1 /* @    */, 1 /* A    */, 1 /* B    */, 1 /* C    */,
  1 /* D    */, 1 /* E    */, 1 /* F    */, 1 /* G    */,
  1 /* H    */, 1 /* I    */, 1 /* J    */, 1 /* K    */,
  1 /* L    */, 1 /* M    */, 1 /* N    */, 1 /* O    */,
  1 /* P    */, 1 /* Q    */, 1 /* R    */, 1 /* S    */,
  1 /* T    */, 1 /* U    */, 1 /* V    */, 1 /* W    */,
  1 /* X    */, 1 /* Y    */, 1 /* Z    */, 1 /* [    */,
  0 /* \    */, 1 /* ]    */, 0 /* ^    */, 1 /* _    */,
  0 /* `    */, 1 /* a    */, 1 /* b    */, 1 /* c    */,
  1 /* d    */, 1 /* e    */, 1 /* f    */, 1 /* g    */,
  1 /* h    */, 1 /* i    */, 1 /* j    */, 1 /* k    */,
  1 /* l    */, 1 /* m    */, 1 /* n    */, 1 /* o    */,
  1 /* p    */, 1 /* q    */, 1 /* r    */, 1 /* s    */,
  1 /* t    */, 1 /* u    */, 1 /* v    */, 1 /* w    */,
  1 /* x    */, 1 /* y    */, 1 /* z    */, 0 /* {    */,
  0 /* |    */, 0 /* }    */, 1 /* ~    */, 0 /* DEL  */,
  0 /* 0x80 */, 0 /* 0x81 */, 0 /* 0x82 */, 0 /* 0x83 */,
  0 /* 0x84 */, 0 /* 0x85 */, 0 /* 0x86 */, 0 /* 0x87 */,
  0 /* 0x88 */, 0 /* 0x89 */, 0 /* 0x8a */, 0 /* 0x8b */,
  0 /* 0x8c */, 0 /* 0x8d */, 0 /* 0x8e */, 0 /* 0x8f */,
  0 /* 0x90 */, 0 /* 0x91 */, 0 /* 0x92 */, 0 /* 0x93 */,
  0 /* 0x94 */, 0 /* 0x95 */, 0 /* 0x96 */, 0 /* 0x97 */,
  0 /* 0x98 */, 0 /* 0x99 */, 0 /* 0x9a */, 0 /* 0x9b */,
  0 /* 0x9c */, 0 /* 0x9d */, 0 /* 0x9e */, 0 /* 0x9f */,
  0 /* 0xa0 */, 0 /* 0xa1 */, 0 /* 0xa2 */, 0 /* 0xa3 */,
  0 /* 0xa4 */, 0 /* 0xa5 */, 0 /* 0xa6 */, 0 /* 0xa7 */,
  0 /* 0xa8 */, 0 /* 0xa9 */, 0 /* 0xaa */, 0 /* 0xab */,
  0 /* 0xac */, 0 /* 0xad */, 0 /* 0xae */, 0 /* 0xaf */,
  0 /* 0xb0 */, 0 /* 0xb1 */, 0 /* 0xb2 */, 0 /* 0xb3 */,
  0 /* 0xb4 */, 0 /* 0xb5 */, 0 /* 0xb6 */, 0 /* 0xb7 */,
  0 /* 0xb8 */, 0 /* 0xb9 */, 0 /* 0xba */, 0 /* 0xbb */,
  0 /* 0xbc */, 0 /* 0xbd */, 0 /* 0xbe */, 0 /* 0xbf */,
  0 /* 0xc0 */, 0 /* 0xc1 */, 0 /* 0xc2 */, 0 /* 0xc3 */,
  0 /* 0xc4 */, 0 /* 0xc5 */, 0 /* 0xc6 */, 0 /* 0xc7 */,
  0 /* 0xc8 */, 0 /* 0xc9 */, 0 /* 0xca */, 0 /* 0xcb */,
  0 /* 0xcc */, 0 /* 0xcd */, 0 /* 0xce */, 0 /* 0xcf */,
  0 /* 0xd0 */, 0 /* 0xd1 */, 0 /* 0xd2 */, 0 /* 0xd3 */,
  0 /* 0xd4 */, 0 /* 0xd5 */, 0 /* 0xd6 */, 0 /* 0xd7 */,
  0 /* 0xd8 */, 0 /* 0xd9 */, 0 /* 0xda */, 0 /* 0xdb */,
  0 /* 0xdc */, 0 /* 0xdd */, 0 /* 0xde */, 0 /* 0xdf */,
  0 /* 0xe0 */, 0 /* 0xe1 */, 0 /* 0xe2 */, 0 /* 0xe3 */,
  0 /* 0xe4 */, 0 /* 0xe5 */, 0 /* 0xe6 */, 0 /* 0xe7 */,
  0 /* 0xe8 */, 0 /* 0xe9 */, 0 /* 0xea */, 0 /* 0xeb */,
  0 /* 0xec */, 0 /* 0xed */, 0 /* 0xee */, 0 /* 0xef */,
  0 /* 0xf0 */, 0 /* 0xf1 */, 0 /* 0xf2 */, 0 /* 0xf3 */,
  0 /* 0xf4 */, 0 /* 0xf5 */, 0 /* 0xf6 */, 0 /* 0xf7 */,
  0 /* 0xf8 */, 0 /* 0xf9 */, 0 /* 0xfa */, 0 /* 0xfb */,
  0 /* 0xfc */, 0 /* 0xfd */, 0 /* 0xfe */, 0 /* 0xff */
};

int nghttp2_check_authority(const uint8_t *value, size_t len) {
  const uint8_t *last;
  for (last = value + len; value != last; ++value) {
    if (!VALID_AUTHORITY_CHARS[*value]) {
      return 0;
    }
  }
  return 1;
}

uint8_t *nghttp2_cpymem(uint8_t *dest, const void *src, size_t len) {
  if (len == 0) {
    return dest;
  }

  memcpy(dest, src, len);

  return dest + len;
}

const char *nghttp2_http2_strerror(uint32_t error_code) {
  switch (error_code) {
    case NGHTTP2_NO_ERROR: return "NO_ERROR";
    case NGHTTP2_PROTOCOL_ERROR: return "PROTOCOL_ERROR";
    case NGHTTP2_INTERNAL_ERROR: return "INTERNAL_ERROR";
    case NGHTTP2_FLOW_CONTROL_ERROR: return "FLOW_CONTROL_ERROR";
    case NGHTTP2_SETTINGS_TIMEOUT: return "SETTINGS_TIMEOUT";
    case NGHTTP2_STREAM_CLOSED: return "STREAM_CLOSED";
    case NGHTTP2_FRAME_SIZE_ERROR: return "FRAME_SIZE_ERROR";
    case NGHTTP2_REFUSED_STREAM: return "REFUSED_STREAM";
    case NGHTTP2_CANCEL: return "CANCEL";
    case NGHTTP2_COMPRESSION_ERROR: return "COMPRESSION_ERROR";
    case NGHTTP2_CONNECT_ERROR: return "CONNECT_ERROR";
    case NGHTTP2_ENHANCE_YOUR_CALM: return "ENHANCE_YOUR_CALM";
    case NGHTTP2_INADEQUATE_SECURITY: return "INADEQUATE_SECURITY";
    case NGHTTP2_HTTP_1_1_REQUIRED: return "HTTP_1_1_REQUIRED";
    default: return "unknown";
  }
}
