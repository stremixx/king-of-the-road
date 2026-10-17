
undefined4 FUN_00441ab0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063de1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401870();
  FUN_004018b0();
  local_4 = 0;
  FUN_004471c0();
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x40) = 0;
  iVar3 = *(int *)(DAT_0068bbf8 + param_1 * 4);
  if ((uint)((*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c)) / 0x24) <= param_2) {
    FUN_0061c369();
    FUN_00401010(0x220,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x4318,
                 s_There_s_no_such_parking_place__0066dfbc,local_8c,&DAT_0068c120);
  }
  iVar1 = *(int *)(iVar3 + 0x1c) + param_2 * 0x24;
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(*(int *)(iVar3 + 0x1c) + param_2 * 0x24);
  iVar3 = *(int *)(iVar1 + 8);
  if ((iVar3 == DAT_0068a8f0) || (*(int *)(param_3 + 0x28) = iVar3, *(int *)(iVar3 + 0x204) == 0))
  goto LAB_00441ca1;
  fVar7 = (float10)FUN_004736d0();
  *(double *)(param_3 + 0x18) = (double)fVar7;
  *(undefined4 *)(param_3 + 0xc) =
       *(undefined4 *)(*(int *)(DAT_0068bf38 + *(int *)(*(int *)(iVar3 + 0x204) + 4) * 4) + 0x48);
  FUN_0041d3f0(iVar1 + 8);
  FUN_0041b9a0();
  iVar4 = *(int *)(DAT_0068bf38 + *(int *)(*(int *)(iVar3 + 0x204) + 4) * 4);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar4 + 0x38);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar4 + 0x3c);
  if ((*(uint *)(iVar1 + 4) & 1) == 0) {
    if ((*(uint *)(iVar1 + 4) & 2) != 0) {
      fVar7 = (float10)FUN_00477470();
      *(double *)(param_3 + 0x38) = (double)fVar7;
      uVar5 = *(uint *)(param_3 + 0x40) | 2;
      goto LAB_00441c77;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x38) = 0;
    *(undefined4 *)(param_3 + 0x3c) = 0;
    uVar5 = *(uint *)(param_3 + 0x40) | 1;
LAB_00441c77:
    *(uint *)(param_3 + 0x40) = uVar5;
  }
  if ((*(byte *)(*(int *)(iVar3 + 0x204) + 0x28) & 2) != 0) {
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | 4;
  }
  if ((*(byte *)(*(int *)(iVar3 + 0x204) + 0x28) & 1) != 0) {
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | 8;
  }
LAB_00441ca1:
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar6 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar6 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar6 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar6 = s_getParkingInfo_ParkingId_parking_0066dfe0;
  cVar2 = s_getParkingInfo_ParkingId_parking_0066dfe0[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar2 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar2;
      cVar2 = *pcVar6;
    }
  }
  ExceptionList = local_c;
  return 0;
}

