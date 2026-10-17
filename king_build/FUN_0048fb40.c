
int FUN_0048fb40(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_stack_00000270;
  int in_stack_000004b4;
  void *in_stack_000016d8;
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  undefined1 *local_14;
  undefined1 *local_10;
  double local_c;
  
  local_c = (double)CONCAT44(local_c._4_4_,0xffffffff);
  local_10 = &LAB_00640b7f;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0061d4f0();
  local_10 = (undefined1 *)0x0;
  if (param_4 != 1) {
    uStack_30._4_4_ = param_3;
    uStack_38._4_4_ = &stack0x00000274;
    uStack_30._0_4_ = param_2;
    uStack_38._0_4_ = 0x48fc1c;
    puStack_28 = (undefined1 *)(param_4 + -1);
    FUN_0048fb40();
    uStack_38._0_4_ = param_5;
    local_40 = (double)CONCAT44(param_4 + -1,param_3 + 1);
    puStack_48 = &stack0x00000030;
    iStack_44 = param_2;
    uStack_4c = 0x48fc3b;
    FUN_0048fb40();
    if (&stack0x00000030 == &stack0x00000030 + in_stack_00000270 * 0x18) {
      uVar2 = 0x10;
      local_10 = (undefined1 *)0x10;
      local_14 = &stack0x000006fc;
    }
    else {
      local_c = *(double *)(param_2 + (param_3 + param_4) * 8) -
                *(double *)(param_2 + (param_3 + 1) * 8);
      puStack_28 = (undefined1 *)local_c._0_4_;
      local_40 = (double)CONCAT44(0x48fc8d,(undefined4)local_40);
      uStack_30 = local_c;
      uStack_38 = local_c;
      FUN_00405ea0();
      local_40 = *(double *)(param_2 + (param_3 + param_4) * 8);
      local_14 = (undefined1 *)&uStack_38;
      iStack_44 = 0x48fca2;
      FUN_0048fec0();
      local_14 = auStack_50;
      FUN_0048fec0();
      FUN_0048ed40();
      local_10 = (undefined1 *)0x2;
      puStack_28 = &stack0x00001250;
      uStack_30._4_4_ = 0x48fce7;
      FUN_00490450();
      puStack_28 = &stack0x00001494;
      uStack_30._4_4_ = 0x48fcfb;
      local_14 = (undefined1 *)FUN_0048f0b0();
      uVar2 = 0xe;
      local_10 = (undefined1 *)0xe;
    }
    if (&stack0x00000274 == &stack0x00000274 + in_stack_000004b4 * 0x18) {
      uVar2 = (uint)CONCAT11(1,(char)uVar2);
    }
    else {
      local_c = *(double *)(param_2 + -8 + (param_3 + param_4) * 8) -
                *(double *)(param_2 + param_3 * 8);
      puStack_28 = (undefined1 *)local_c._0_4_;
      local_40 = (double)CONCAT44(0x48fd87,(undefined4)local_40);
      uStack_30 = local_c;
      uStack_38 = local_c;
      FUN_00405ea0();
      local_40 = -*(double *)(param_2 + param_3 * 8);
      iStack_44 = 0x48fda0;
      local_c._0_4_ = &uStack_38;
      FUN_0048fec0();
      local_c = (double)CONCAT44(local_c._4_4_,auStack_50);
      FUN_0048fec0();
      FUN_0048ed40();
      puStack_28 = &stack0x00000b84;
      uStack_30._4_4_ = 0x48fde7;
      local_10 = (undefined1 *)(uVar2 | 0x20);
      FUN_00490450();
      puStack_28 = &stack0x00000dc8;
      uStack_30._4_4_ = 0x48fdfe;
      FUN_0048f0b0();
      uVar2 = (uint)(byte)((byte)(uVar2 | 0x20) | 0xc0);
    }
    puStack_28 = (undefined1 *)param_1;
    uStack_30._4_4_ = 0x48fe28;
    FUN_0048f370();
    if ((char)(uVar2 >> 8) != '\0') {
      uVar2 = uVar2 & 0xff;
      FUN_004030a0();
    }
    if ((uVar2 & 0x80) != 0) {
      uVar2 = (uint)((byte)uVar2 & 0x7f);
      FUN_004030a0();
    }
    if ((uVar2 & 0x40) != 0) {
      uVar2 = uVar2 & 0xffffffbf;
      FUN_004030a0();
    }
    if ((uVar2 & 0x20) != 0) {
      uVar2 = uVar2 & 0xffffffdf;
      FUN_004030a0();
    }
    if ((uVar2 & 0x10) != 0) {
      FUN_004030a0();
    }
    ExceptionList = in_stack_000016d8;
    return param_1;
  }
  if (param_3 == param_5) {
    puStack_28 = (undefined1 *)0x0;
    uStack_30._4_4_ = 0x3ff00000;
    uStack_30._0_4_ = 0;
    uStack_38._4_4_ = (undefined1 *)0x3ff00000;
    uStack_38._0_4_ = 0;
    local_40 = (double)CONCAT44(0x48fb9f,(undefined4)local_40);
    FUN_00405ea0();
    puVar3 = (undefined4 *)register0x00000010;
    puVar4 = (undefined4 *)&stack0x00000018;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x240) = 0;
    puStack_28 = (undefined1 *)0x48fbcc;
    FUN_0048fee0();
    ExceptionList = in_stack_000016d8;
    return param_1;
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  ExceptionList = in_stack_000016d8;
  return param_1;
}

