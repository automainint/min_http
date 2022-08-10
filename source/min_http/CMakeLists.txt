target_sources(
  ${MIN_HTTP_LIBRARY}
    PRIVATE
      nghttp2_session.c nghttp2_version.c
      nghttp2_outbound_item.c nghttp2_hd_huffman.c nghttp2_priority_spec.c
      nghttp2_callbacks.c nghttp2_map.c nghttp2_buf.c nghttp2_submit.c nghttp2_pq.c
      nghttp2_option.c nghttp2_helper.c nghttp2_http.c nghttp2_debug.c
      nghttp2_hd.c nghttp2_rcbuf.c nghttp2_extpri.c nghttp2_stream.c
      nghttp2_frame.c nghttp2_npn.c nghttp2_queue.c nghttp2_mem.c
      nghttp2_hd_huffman_data.c
    PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_net.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_priority_spec.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_helper.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_frame.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_callbacks.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_int.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_extpri.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_buf.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_hd_huffman.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_http.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2ver.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_stream.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_npn.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_rcbuf.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_outbound_item.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_map.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_mem.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_hd.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_option.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_debug.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_queue.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_pq.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_session.h>
      $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/nghttp2_submit.h>)
