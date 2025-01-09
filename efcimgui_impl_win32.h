#ifndef _EFCIMGUI_IMPL_WIN32_H
#define _EFCIMGUI_IMPL_WIN32_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int efcimgui_impl_win32_init(HWND hwnd);
int efcimgui_impl_win32_init_for_open_gl(HWND hwnd);
void efcimgui_impl_win32_shutdown(void);
void efcimgui_impl_win32_new_frame(void);
LRESULT efcimgui_impl_win32_wnd_proc_handler(
    HWND hwnd,
    UINT msg,
    WPARAM wparam,
    LPARAM lparam);
void efcimgui_impl_win32_enable_dpi_awareness(void);
float efcimgui_impl_win32_get_dpi_scale_for_hwnd(HWND hwnd);
float efcimgui_impl_win32_get_dpi_scale_for_monitor(HMONITOR monitor);
void efcimgui_impl_win32_enable_alpha_compositing(HWND hwnd);

#endif

