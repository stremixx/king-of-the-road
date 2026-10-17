
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056e7f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30 [12];
  
  iVar1 = FUN_005e4980(param_1);
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 != 0) {
    if ((((*(int *)(iVar1 + 0x1a0) == 0) && (param_3 != 0)) && (*(int *)(param_3 + 0x188) == 2)) &&
       ((*(int *)(param_3 + 0xdf0) == 2 && (param_3 + -0x10 == *(int *)(DAT_006d0fd8 + 0x268))))) {
      iVar3 = *(int *)(param_3 + 0x508c);
      *(double *)(iVar3 + 0xd0) = *(double *)(iVar3 + 0xd0) + _DAT_0064ef00;
      *(uint *)(iVar3 + 0xd8) = *(uint *)(iVar3 + 0xd8) | 0x20;
    }
    if ((*(uint *)(iVar1 + 0x1a0) & 3 << ((char)param_2 * '\x02' & 0x1fU)) == 0) {
      puVar2 = local_30 + 2;
      iVar3 = 4;
      do {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar2 = &DAT_00701550;
      puVar4 = local_30;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_005a36c0(local_30);
      FUN_004ba110(local_30,param_2,&LAB_005687a0,iVar1);
    }
  }
  return;
}

