
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0057cc60(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float local_9c [4];
  float local_8c;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [104];
  
  if (DAT_00695bcc != 0) {
    iVar5 = 4;
    do {
      FUN_004042a0();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pfVar4 = (float *)&DAT_00701550;
    pfVar6 = local_9c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_005f1c10();
    FUN_004e9b0e();
    FUN_0061c369(local_6c,s__s_M0__6_3f__6_3f__6_3f_0067c078,
                 *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc),(double)local_78,(double)local_74,
                 (double)local_70);
    FUN_004e9b0e(local_6c);
    FUN_0061c369(local_6c,s_A__s_M__6_3f__6_3f__6_3f_0067c05a + 2,
                 *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc),(double)*(float *)(param_1 + 0x118)
                 ,(double)*(float *)(param_1 + 0x11c),(double)*(float *)(param_1 + 0x120));
    FUN_004e9b0e(local_6c);
  }
  uVar2 = FUN_005f8f30(param_2,param_3);
  if (1 < DAT_00695b44) {
    iVar5 = *(int *)(DAT_006ee15c + 0x1d0);
    pfVar4 = (float *)(*(int *)(iVar5 + 0x2020) * 0x30 + 0x8c0 + iVar5);
    pfVar6 = local_9c;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    }
    if (_DAT_0064b240 <=
        local_8c * *(float *)(param_1 + 0x11c) +
        local_80 * *(float *)(param_1 + 0x120) + local_9c[1] * *(float *)(param_1 + 0x118) +
        local_74) {
      uVar1 = *(undefined4 *)(iVar5 + 0x79c);
      iVar5 = __ftol();
      iVar3 = __ftol();
      FUN_005b6a50(uVar1,iVar5,iVar3 + -4,iVar5,iVar3 + 4,0,0);
      FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar5 + -4,iVar3,
                   iVar5 + 4,iVar3,0,0);
      FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar5 + -3,iVar3 + -3,
                   iVar5 + 3,iVar3 + 3,4,0);
      FUN_005b6a50(*(undefined4 *)(*(int *)(DAT_006ee15c + 0x1d0) + 0x79c),iVar5 + 3,iVar3 + -3,
                   iVar5 + -3,iVar3 + 3,4,0);
      return uVar2;
    }
  }
  return uVar2;
}

