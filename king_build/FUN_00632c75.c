
void __thiscall FUN_00632c75(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 != 0);
  if ((param_1[3] != 0) && (param_1[4] == 0)) {
    if ((DAT_0072d028 == (HBITMAP)0x0) && (FUN_00639530(), DAT_0072d028 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(param_1[3] + 4),param_1[2],0x400,(HBITMAP)0x0,DAT_0072d028);
  }
  return;
}

