#ifndef _EFCIMGUI_IMPL_DX9_H
#define _EFCIMGUI_IMPL_DX9_H

#include <d3d9.h>
#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

int efcimgui_impl_dx9_init(IDirect3DDevice9 *device);
void efcimgui_impl_dx9_shutdown(void);
void efcimgui_impl_dx9_new_frame(void);
void efcimgui_impl_dx9_render_draw_data(ImDrawData *draw_data);
int efcimgui_impl_dx9_create_device_objects(void);
void efcimgui_impl_dx9_invalidate_device_objects(void);

#endif

