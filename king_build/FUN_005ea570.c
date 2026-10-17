
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005ea570(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,int param_6
            ,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_28 [10];
  
  iVar4 = 4;
  iVar1 = *(int *)(param_7 + 0x4c);
  puVar2 = local_28;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((((*(int *)(param_1 + 0x5c) != 0) && (-1 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x58))) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + iVar1 * 4), iVar1 != 0)) {
    uVar6 = (uint)**(ushort **)(param_6 + 0x79c);
    fpatan((float10)*(float *)(param_2 + 0x58) * (float10)_DAT_0064b248,(float10)1);
    fpatan((float10)*(float *)(param_2 + 0x54) * (float10)_DAT_0064b248,(float10)1);
    __ftol();
    uVar7 = (int)uVar6 >> 1;
    uVar5 = uVar7;
    if ((float)_DAT_0064a648 <= ABS(param_5)) {
      fptan((float10)param_5);
      uVar5 = __ftol();
      if (((int)uVar5 < 4) && (-1 < (int)uVar5)) {
        uVar5 = 4;
      }
      else if ((-4 < (int)uVar5) && ((int)uVar5 < 1)) {
        uVar5 = 0xfffffffc;
      }
      if ((int)uVar7 < (int)uVar5) {
        uVar5 = uVar7;
      }
      if ((int)uVar5 < (int)-uVar7) {
        uVar5 = -uVar7;
      }
    }
    if ((int)uVar5 < 1) {
      param_2 = -1;
      uVar5 = -uVar5;
    }
    else {
      param_2 = 1;
    }
    if ((int)uVar7 <= (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      param_2 = 0;
    }
    iVar3 = __ftol();
    param_5 = (float)__ftol();
    iVar4 = iVar3;
    uVar8 = uVar7;
    if (uVar7 < uVar6) {
      do {
        FUN_005ea380(*(undefined4 *)(param_6 + 0x79c),iVar1,iVar4,uVar5,uVar8,param_5,
                     *(undefined4 *)(param_7 + 0x54),*(undefined4 *)(param_7 + 0x58));
        param_5 = (float)((int)param_5 + param_2);
        uVar8 = uVar8 + uVar5;
        iVar4 = iVar4 + uVar5;
      } while ((int)uVar8 < (int)uVar6);
    }
    iVar4 = uVar7 - uVar5;
    param_5 = (float)__ftol();
    param_4 = iVar4 + uVar5;
    if (0 < param_4) {
      iVar3 = (iVar3 - uVar7) + iVar4;
      do {
        FUN_005ea380(*(undefined4 *)(param_6 + 0x79c),iVar1,iVar3,uVar5,iVar4,param_5,
                     *(undefined4 *)(param_7 + 0x54),*(undefined4 *)(param_7 + 0x58));
        param_4 = param_4 - uVar5;
        iVar4 = iVar4 - uVar5;
        iVar3 = iVar3 - uVar5;
        param_5 = (float)((int)param_5 - param_2);
      } while (0 < param_4);
    }
  }
  return;
}

