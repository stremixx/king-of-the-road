
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_004d62a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [12];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  uVar3 = *(undefined4 *)(param_1 + 0x40a8);
  uVar1 = *(undefined4 *)(param_1 + 0x40ac);
  uVar2 = __ftol();
  *(undefined4 *)(param_1 + 0x4060) = uVar2;
  local_a0 = 0;
  uStack_9c = 0xbff00000;
  FUN_004d5720(*(undefined4 *)(param_1 + 0x40c0),param_2,param_3,param_4,param_5,param_6,uVar3,uVar1
               ,param_7,*(undefined4 *)(param_1 + 0x40b0),*(undefined4 *)(param_1 + 0x40b4),
               (double)*(float *)(param_1 + 0x332c),*(undefined4 *)(param_1 + 0x4074),
               *(undefined4 *)(param_1 + 0x4078),&local_a0,(byte *)(param_1 + 0x4070),
               param_1 + 0x4064,param_1 + 0x405c,param_8);
  if (((*(byte *)(param_1 + 0x4070) & 8) != 0) && (*(double *)(param_1 + 0x40b0) < _DAT_0064a668)) {
    puVar5 = (undefined4 *)(param_1 + 0x10);
    puVar6 = local_98;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_0057d570(local_68);
    FUN_005aba00(local_38,uVar3);
    FUN_005432e0();
    FUN_005fcc60();
  }
  return (float10)(double)CONCAT44(uStack_9c,local_a0);
}

