
void FUN_0041f080(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  param_1[0x18] = param_1[0x18] & 0xffff7fff;
  iVar7 = param_1[0x82];
  if ((iVar7 == 0) || (*(int *)(iVar7 + 4) == -1)) {
    iVar7 = param_1[0x81];
    if ((iVar7 == 0) || (*(int *)(iVar7 + 4) == -1)) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,s_Internal_error_9012_0066c41c,
                   &DAT_0068c120,&DAT_0068c120);
      piVar4 = param_1;
    }
    else {
      piVar4 = (int *)(iVar7 + 0x1c);
    }
  }
  else {
    piVar4 = (int *)(iVar7 + 0x1c);
  }
  iVar7 = *piVar4;
  piVar4 = param_1;
  do {
    iVar6 = param_1[0x82];
    if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
      iVar6 = param_1[0x81];
      if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
      }
      else {
        piVar4 = (int *)(iVar6 + 0x1c);
      }
    }
    else {
      piVar4 = (int *)(iVar6 + 0x1c);
    }
    if (iVar7 == piVar4[1]) {
      return;
    }
    puVar2 = *(uint **)(DAT_0068be20 + *(int *)(iVar7 + 0xc) * 4);
    uVar3 = *puVar2;
    pbVar8 = &DAT_0066c768;
    pbVar5 = (byte *)(-(uint)(uVar3 != puVar2[1]) & uVar3);
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0041f190:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0041f195;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0041f190;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0041f195:
    if (iVar6 == 0) {
      param_1[0x18] = param_1[0x18] | 0x8000;
    }
    iVar7 = iVar7 + 0x90;
  } while( true );
}

