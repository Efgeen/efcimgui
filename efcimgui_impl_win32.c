#include "efcimgui_impl_win32.h"

extern bool ImGui_ImplWin32_Init(void *hwnd);
int efcimgui_impl_win32_init(HWND hwnd) {
    return !ImGui_ImplWin32_Init(hwnd);
}

extern bool ImGui_ImplWin32_InitForOpenGL(void *hwnd);
int efcimgui_impl_win32_init_for_open_gl(HWND hwnd) {
    return !ImGui_ImplWin32_InitForOpenGL(hwnd);
}

extern void ImGui_ImplWin32_Shutdown(void);
void efcimgui_impl_win32_shutdown(void) {
    ImGui_ImplWin32_Shutdown();
}

extern void ImGui_ImplWin32_NewFrame(void);
void efcimgui_impl_win32_new_frame(void) {
    ImGui_ImplWin32_NewFrame();
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(
    HWND hWnd,
    UINT msg,
    WPARAM wParam,
    LPARAM lParam);
LRESULT efcimgui_impl_win32_wnd_proc_handler(
        HWND hwnd,
        UINT msg,
        WPARAM wparam,
        LPARAM lparam) {
    return ImGui_ImplWin32_WndProcHandler(hwnd, msg, wparam, lparam);
}

extern void ImGui_ImplWin32_EnableDpiAwareness(void);
void efcimgui_impl_win32_enable_dpi_awareness(void) {
    ImGui_ImplWin32_EnableDpiAwareness();
}

extern float ImGui_ImplWin32_GetDpiScaleForHwnd(void *hwnd);
float efcimgui_impl_win32_get_dpi_scale_for_hwnd(HWND hwnd) {
    return ImGui_ImplWin32_GetDpiScaleForHwnd(hwnd);
}

extern float ImGui_ImplWin32_GetDpiScaleForMonitor(void *monitor);
float efcimgui_impl_win32_get_dpi_scale_for_monitor(HMONITOR monitor) {
    return ImGui_ImplWin32_GetDpiScaleForMonitor(monitor);
}

extern void ImGui_ImplWin32_EnableAlphaCompositing(void *hwnd);
void efcimgui_impl_win32_enable_alpha_compositing(HWND hwnd) {
    ImGui_ImplWin32_EnableAlphaCompositing(hwnd);
}

