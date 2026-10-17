
void __fastcall FUN_00555820(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xa2d] * 0x970;
  (**(code **)(*param_1 + 0x80))
            ((&DAT_006968dc)[param_1[0xa2d] * 0x25c],*(undefined4 *)(&DAT_006968e0 + iVar1),
             *(undefined4 *)(&DAT_006968e4 + iVar1));
  return;
}

