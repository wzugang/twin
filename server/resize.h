#ifndef _TW_RESIZE_H
#define _TW_RESIZE_H

byte WriteRow(window *Window, uldat Len, byte *Text);

void UpdateCursor(void);

byte CheckResizeWindowContents(window *Window);
byte ResizeWindowContents(window *Window);

/*
void SetNewFont(void);
void GetPalette(void);
void SetPalette(void);
 */

void ResizeFirstScreen(dat DeltaY);
void DragFirstScreen(dat DeltaX, dat DeltaY);
void HideMenu(byte on_off);
void ChangeMenuFirstScreen(menuitem *NewMenuItem, byte ByMouse, byte Flag);
#define ACTIVATE_MENU_FLAG	(byte)1
#define DISABLE_MENU_FLAG	(byte)2
#define KEEP_ACTIVE_MENU_FLAG	(byte)3


void DragFirstWindow(dat i, dat j);
void ResizeFirstWindow(dat i, dat j);
void ResizeWindow(window *Window, dat i, dat j);
void CenterWindow(window *Window);
byte ExecScrollFirstWindow(void);
void ScrollFirstWindow(dat DeltaX, dat DeltaY, byte byXYLogic);
void ScrollFirstWindowArea(dat X1, dat Y1, dat X2, dat Y2, dat DeltaX, dat DeltaY);

void MakeFirstWindow(window *Window);
void MakeLastWindow(window *Window);

#endif /* _TW_RESIZE_H */

