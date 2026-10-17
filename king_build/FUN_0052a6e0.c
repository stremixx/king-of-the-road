
void __fastcall FUN_0052a6e0(int *param_1)

{
  int iVar1;
  undefined1 local_c8 [200];
  
  iVar1 = param_1[1] * 0xb + *param_1;
  (&DAT_006cdd0c)[iVar1] = (&DAT_006cdd0c)[iVar1] + -1;
  iVar1 = param_1[1] * 0xb + *param_1;
  if (((&DAT_006cdd0c)[iVar1] == 0) && ((int *)(&DAT_006cdcf8)[iVar1] != (int *)0x0)) {
    (**(code **)(*(int *)(&DAT_006cdcf8)[iVar1] + 0x24))();
  }
  if ((int)(&DAT_006cdd0c)[param_1[1] * 0xb + *param_1] < 0) {
    FUN_0061c369(local_c8,s___TBCluster__numT__l_numOLV__l_00677400,param_1[1],
                 (&DAT_006cdd0c)[param_1[1] * 0xb + *param_1]);
  }
  return;
}

