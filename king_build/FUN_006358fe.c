
void __thiscall FUN_006358fe(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    *param_1 = PTR_DAT_00684f18;
  }
  else {
    uVar2 = 0x40;
    if ((((param_2 < 0x41) || (uVar2 = 0x80, param_2 < 0x81)) || (uVar2 = 0x100, param_2 < 0x101))
       || (uVar2 = 0x200, param_2 < 0x201)) {
      puVar1 = (undefined4 *)FUN_0061c14f();
      puVar1[2] = uVar2;
    }
    else {
      puVar1 = (undefined4 *)FUN_00631d33(param_2 + 0xd);
      puVar1[2] = param_2;
    }
    *puVar1 = 1;
    *(undefined1 *)((int)puVar1 + param_2 + 0xc) = 0;
    puVar1[1] = param_2;
    *param_1 = puVar1 + 3;
  }
  return;
}

