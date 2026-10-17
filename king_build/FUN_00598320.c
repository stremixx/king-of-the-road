
void __thiscall FUN_00598320(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_d8 [7];
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_9c [12];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  *(int *)(param_1 + 100) = param_2;
  if (*(int *)(param_1 + 0x7c) != 0) {
    local_ac = 0;
    if (param_2 == 0) {
      local_b0 = *(undefined4 *)(param_1 + 0x60);
      local_b4 = local_9c;
      puStack_b8 = (undefined1 *)0x598350;
      puVar1 = (undefined4 *)FUN_00594500();
      local_b4 = (undefined1 *)*puVar1;
      local_b0 = puVar1[1];
      local_ac = puVar1[2];
      puStack_b8 = local_90;
      uStack_bc = 0x59836c;
      local_ac = FUN_005ab330();
      local_b4 = local_60;
      local_b0 = 0x40490fda;
      puStack_b8 = (undefined1 *)0x59837f;
      local_b0 = FUN_005ab7d0();
      local_b4 = local_30;
      puStack_b8 = (undefined1 *)0x598390;
      puVar1 = (undefined4 *)FUN_005ab130();
      puVar3 = auStack_d8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_00595b60(0);
      return;
    }
    local_b0 = 0x5983b9;
    FUN_005955a0();
  }
  return;
}

