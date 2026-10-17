
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ceb0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  char **ppcVar5;
  char *pcStack_88;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 *puStack_6c;
  int *piStack_68;
  undefined1 auStack_64 [4];
  int *piStack_60;
  char *pcStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  double dStack_20;
  int *piStack_14;
  
  piVar2 = param_1;
  piStack_40 = (int *)&param_1;
  iVar1 = *param_1;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0x1011;
  piStack_50 = (int *)&DAT_00676698;
  piStack_54 = (int *)0x51ced3;
  piStack_50 = (int *)FUN_0050b500();
  piStack_54 = piVar2;
  piStack_58 = (int *)0x51cedb;
  (**(code **)(iVar1 + 0xc))();
  if (piStack_14 == (int *)0x0) {
    piStack_58 = piStack_14;
    pcStack_5c = s_can_not_open_env_settings_for_sa_0067666c;
    piStack_60 = (int *)0x51ceee;
    FUN_005d2520();
  }
  uStack_30 = *(undefined8 *)(DAT_006f230c + 0x58);
  uStack_28 = *(double *)(DAT_006f230c + 0x68) * _DAT_0064d4b8;
  piStack_58 = &uStack_4c;
  dStack_20 = (double)*(float *)(DAT_006f230c + 0x220);
  piStack_60 = (int *)&uStack_30;
  pcStack_5c = (char *)0x18;
  piStack_68 = (int *)0x51cf2a;
  (**(code **)(*piStack_14 + 0x10))();
  piStack_68 = uStack_28._4_4_;
  puStack_6c = (undefined8 *)0x51cf34;
  (**(code **)(*uStack_28._4_4_ + 8))();
  iVar1 = *piVar2;
  puStack_6c = &uStack_28;
  uStack_70 = 0;
  uStack_74 = 0;
  iStack_78 = 0x1011;
  piStack_7c = (int *)&DAT_00676664;
  piStack_80 = (int *)0x51cf4e;
  piStack_7c = (int *)FUN_0050b500();
  piStack_80 = piVar2;
  piStack_84 = (int *)0x51cf56;
  (**(code **)(iVar1 + 0xc))();
  if (piStack_40 == (int *)0x0) {
    piStack_84 = piStack_40;
    pcStack_88 = s_can_not_open_stat_settings_for_s_00676638;
    FUN_005d2520();
  }
  piStack_84 = &iStack_78;
  uStack_74 = 6;
  pcStack_88 = (char *)0x4;
  (**(code **)(*piStack_40 + 0x10))(piStack_40,&uStack_74);
  iVar1 = *(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5460);
  if ((iVar1 == 0) || (piStack_84 = (int *)0x1, *(int *)(iVar1 + 0x3c50) == 0)) {
    piStack_84 = (int *)0x0;
  }
  piStack_80 = *(int **)(*(int *)(DAT_006d0fd8 + 0x268) + 0x51b8);
  piStack_7c = (int *)FUN_0056cdd0();
  iStack_78 = DAT_006f2318;
  uStack_74 = DAT_006f231c;
  uStack_70 = *(undefined4 *)(DAT_006cdbcc + 0x518);
  ppcVar5 = &pcStack_88;
  piVar4 = (int *)0x18;
  (**(code **)(*piStack_50 + 0x10))(piStack_50,&piStack_84,0x18,ppcVar5);
  (**(code **)(*piStack_60 + 8))(piStack_60);
  iVar1 = *piVar2;
  uVar3 = FUN_0050b500(&PTR_DAT_00676634,0x1011,0,0,auStack_64);
  (**(code **)(iVar1 + 0xc))(piVar2,uVar3);
  if (piStack_7c == (int *)0x0) {
    FUN_005d2520(s_can_not_open_anm_param_for_savin_0067660c,0);
  }
  FUN_005e4210(piStack_7c);
  (**(code **)(*piStack_7c + 8))(piStack_7c);
  iVar1 = *piVar2;
  uVar3 = FUN_0050b500(&DAT_00676200,0x1011,0,0,&piStack_80);
  (**(code **)(iVar1 + 0xc))(piVar2,uVar3);
  if (piVar4 == (int *)0x0) {
    FUN_005d2520(s_can_not_open_context_for_saving_g_006765e4,0);
  }
  FUN_0050bc10(piVar4,0x48,0x36,ppcVar5);
  (**(code **)(*piVar4 + 8))(piVar4);
  return;
}

