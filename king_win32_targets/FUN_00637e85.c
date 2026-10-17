
void __thiscall FUN_00637e85(int param_1,uint param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  iVar1 = FUN_006349e4();
  param_2 = param_2 & 0xfff0;
  if (*(int *)(iVar1 + 0x50) == 0) {
LAB_00637f0e:
    FUN_006333b8();
  }
  else {
    if (param_2 < 0xf041) {
      if (((param_2 != 0xf040) && (param_2 != 0xf000)) && (param_2 != 0xf010)) {
        iVar1 = param_2 - 0xf020;
LAB_00637ecf:
        if ((iVar1 != 0) && (iVar1 != 0x10)) goto LAB_00637f0e;
      }
    }
    else if ((param_2 != 0xf050) && (param_2 != 0xf060)) {
      iVar1 = param_2 - 0xf120;
      goto LAB_00637ecf;
    }
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x365,0,(param_2 - 0xf000 >> 4) + 0x1ef00);
    if (LVar2 == 0) {
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x111,0xe147,0);
    }
  }
  return;
}

