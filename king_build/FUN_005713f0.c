
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005713f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int ****ppppiVar5;
  int *piVar6;
  int **ppiStack_a0;
  int *piStack_9c;
  undefined *puStack_98;
  int *piStack_94;
  int *piStack_90;
  uint uStack_8c;
  int ****ppppiStack_88;
  int *piStack_84;
  int ***pppiStack_80;
  int ***pppiStack_7c;
  int *piStack_78;
  int ***pppiStack_74;
  int *piStack_70;
  undefined1 *puStack_6c;
  int ***pppiStack_68;
  int **ppiStack_64;
  int **ppiStack_60;
  undefined1 *puStack_5c;
  undefined1 local_50 [76];
  
  puStack_5c = local_50;
  iVar2 = *param_1;
  ppiStack_60 = (int **)0x0;
  ppiStack_64 = (int **)0x10;
  pppiStack_68 = (int ***)0x0;
  puStack_6c = &DAT_00676698;
  piStack_70 = (int *)0x571415;
  puStack_6c = (undefined1 *)FUN_0050b500();
  piStack_70 = param_1;
  pppiStack_74 = (int ***)0x57141d;
  (**(code **)(iVar2 + 0x10))();
  if (pppiStack_68 == (int ***)0x0) {
    pppiStack_74 = pppiStack_68;
    piStack_78 = (int *)s_can_not_open_env_settings_for_sa_0067b140;
    pppiStack_7c = (int ***)0x571430;
    FUN_005d2520();
  }
  pppiStack_74 = &ppiStack_64;
  pppiStack_7c = &ppiStack_60;
  piStack_78 = (int *)0x18;
  pppiStack_80 = pppiStack_68;
  piStack_84 = (int *)0x571449;
  (*(code *)(*pppiStack_68)[3])();
  DAT_006f2248 = piStack_70;
  DAT_006f224c = puStack_6c;
  DAT_006f2250 = pppiStack_68;
  DAT_006f2254 = ppiStack_64;
  _DAT_006f2258 = ppiStack_60;
  _DAT_006f225c = puStack_5c;
  piStack_84 = piStack_78;
  ppppiStack_88 = (int ****)0x57148d;
  (**(code **)(*piStack_78 + 8))();
  iVar2 = *param_1;
  ppppiStack_88 = &pppiStack_7c;
  uStack_8c = 0;
  piStack_90 = (int *)0x10;
  piStack_94 = (int *)0x0;
  puStack_98 = &DAT_00676664;
  piStack_9c = (int *)0x5714a4;
  puStack_98 = (undefined *)FUN_0050b500();
  piStack_9c = param_1;
  ppiStack_a0 = (int **)0x5714ac;
  (**(code **)(iVar2 + 0x10))();
  if (piStack_94 != (int *)0x0) {
    ppppiVar5 = &pppiStack_74;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppppiVar5 = (int ***)0x0;
      ppppiVar5 = ppppiVar5 + 1;
    }
    ppiStack_a0 = &piStack_90;
    puStack_6c = (undefined1 *)0x1;
    piVar6 = (int *)0x4;
    (**(code **)(*piStack_94 + 0xc))(piStack_94,&pppiStack_74);
    piVar3 = (int *)((int)piStack_84 << 2);
    (**(code **)(*piVar6 + 0xc))(piVar6,&piStack_84,piVar3,&ppiStack_a0);
    DAT_006f2270 = (uint)piStack_94 & 0x80000001;
    if ((int)DAT_006f2270 < 0) {
      DAT_006f2270 = (DAT_006f2270 - 1 | 0xfffffffe) + 1;
    }
    DAT_006f2274 = (int)piStack_90 % 3;
    DAT_006f2278 = uStack_8c & 0x80000001;
    if ((int)DAT_006f2278 < 0) {
      DAT_006f2278 = (DAT_006f2278 - 1 | 0xfffffffe) + 1;
    }
    DAT_006f227c = (uint)ppppiStack_88 & 0x80000003;
    if ((int)DAT_006f227c < 0) {
      DAT_006f227c = (DAT_006f227c - 1 | 0xfffffffc) + 1;
    }
    DAT_006f2280 = (int)piStack_84 % 3;
    uVar4 = (uint)pppiStack_80 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(DAT_006cdbcc + 0x518) = uVar4;
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  iVar2 = *param_1;
  ppiStack_a0 = &piStack_94;
  piVar3 = (int *)0x0;
  uVar1 = FUN_0050b500(&PTR_DAT_00676634,0,0x10,0);
  (**(code **)(iVar2 + 0x10))(param_1,uVar1);
  if (piVar3 == (int *)0x0) {
    FUN_005d2520(s_can_not_open_anm_param_for_saved_0067b118,0);
  }
  FUN_005e4140(piVar3);
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}

