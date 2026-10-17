
undefined4 FUN_00601280(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((uint)(DAT_00722cc4 - DAT_00722cc0 >> 5) <= param_1) {
    return 0xffffffff;
  }
  puVar1 = (undefined4 *)(param_1 * 0x20 + DAT_00722cc0);
  uVar2 = FUN_006012e0(*puVar1,puVar1[1],puVar1[2],puVar1[3],param_2,param_3,param_4);
  return uVar2;
}

