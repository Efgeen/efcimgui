#include "efcimgui_impl_dx9.h"

extern int ImGui_ImplDX9_Init(IDirect3DDevice9 *device);
int efcimgui_impl_dx9_init(IDirect3DDevice9 *device) {
    return !ImGui_ImplDX9_Init(device);
}

extern void ImGui_ImplDX9_Shutdown(void);
void efcimgui_impl_dx9_shutdown(void) {
    ImGui_ImplDX9_Shutdown();
}

extern void ImGui_ImplDX9_NewFrame(void);
void efcimgui_impl_dx9_new_frame(void) {
    ImGui_ImplDX9_NewFrame();
}

extern void ImGui_ImplDX9_RenderDrawData(ImDrawData *draw_data);
void efcimgui_impl_dx9_render_draw_data(ImDrawData *draw_data) {
    ImGui_ImplDX9_RenderDrawData(draw_data);
}

extern int ImGui_ImplDX9_CreateDeviceObjects(void);
int efcimgui_impl_dx9_create_device_objects(void) {
    return !ImGui_ImplDX9_CreateDeviceObjects();
}

extern void ImGui_ImplDX9_InvalidateDeviceObjects(void);
void efcimgui_impl_dx9_invalidate_device_objects(void) {
    ImGui_ImplDX9_InvalidateDeviceObjects();
}

