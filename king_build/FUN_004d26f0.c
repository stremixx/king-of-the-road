
undefined4 * __thiscall FUN_004d26f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *apvStack_58 [5];
  undefined4 uStack_44;
  int iStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00644f88;
  pvStack_14 = ExceptionList;
  iStack_28 = param_2 % 1000;
  puVar3 = (undefined4 *)&stack0x0000000c;
  ppvVar4 = apvStack_58;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar4 = (void *)*puVar3;
    puVar3 = puVar3 + 1;
    ppvVar4 = ppvVar4 + 1;
  }
  ExceptionList = &pvStack_14;
  FUN_004eb580(param_3);
  param_1[0x1014] = 0;
  param_1[0x1015] = 0;
  param_1[0x1016] = 0;
  param_1[0x102e] = 0;
  param_1[0x100e] = 0;
  param_1[0x1010] = 0;
  *param_1 = &PTR_FUN_0064c2e4;
  param_1[0x100c] = 0;
  param_1[0x100a] = 0;
  param_1[0x102f] = 0;
  param_1[0x100f] = 0;
  param_1[0x1011] = 0;
  param_1[0x100b] = 0;
  param_1[0x101b] = 0;
  param_1[0x101a] = 0;
  param_1[0x101c] = 0;
  param_1[0x101d] = 0;
  uStack_44 = 0;
  param_1[0x9da] = (uint)(*(int *)(DAT_006cdbcc + 0x518) == 0);
  FUN_004eb320(1,1);
  param_1[0x1028] = 0;
  param_1[0x1026] = 0;
  param_1[0x1024] = 0;
  param_1[0x1022] = 0;
  param_1[0x1029] = 0;
  param_1[0x1027] = 0;
  param_1[0x1025] = 0;
  param_1[0x1023] = 0;
  uVar1 = _rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  param_1[0x101f] = uVar1;
  param_1[0x102a] = 0;
  param_1[0x101e] = 0;
  param_1[0x1021] = 0xffffffff;
  param_1[0x1020] = 0xffffffff;
  param_1[0x1019] = 0;
  param_1[0x1017] = uVar1 * 2;
  param_1[0x102b] = 0x400c0000;
  param_1[0x1018] = 10;
  ExceptionList = apvStack_58[3];
  return param_1;
}

