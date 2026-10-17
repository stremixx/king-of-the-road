
void FUN_0042a090(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [132];
  
  FUN_00477c00(&local_94);
  iVar1 = local_94;
  if (local_94 != DAT_0068a8f0) {
    local_90 = 0;
    uStack_8c = 0;
    iVar3 = *(int *)(local_94 + 0x208);
    if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
      iVar3 = *(int *)(local_94 + 0x204);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == -1)) {
        FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                     s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                     s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
        iVar3 = local_94;
      }
      else {
        iVar3 = iVar3 + 0x1c;
      }
    }
    else {
      iVar3 = iVar3 + 0x1c;
    }
    cVar2 = FUN_00429db0(iVar3,&local_90);
    *(double *)(iVar1 + 0x88) = *(double *)(iVar1 + 0x88) - (double)CONCAT44(uStack_8c,local_90);
    if (cVar2 != '\0') {
      FUN_00425880(local_94);
      FUN_0041f080(local_94);
      FUN_004772b0(local_94);
      uVar6 = 0;
      uVar5 = 0xd;
      uVar4 = extraout_ECX;
      FUN_0041d3f0(&local_94);
      FUN_004015a0(uVar4,uVar5,uVar6);
      uVar4 = FUN_0040e1d0(s_ORDER_EXPIRED_0066cbd8,local_90,uStack_8c);
      FUN_0061c369(local_88,uVar4);
      FUN_0056a570(local_88);
      FUN_0056eda0();
      FUN_00483f50(local_90,uStack_8c);
      FUN_00483f70(8,0);
    }
    FUN_00427000(local_94);
  }
  return;
}

