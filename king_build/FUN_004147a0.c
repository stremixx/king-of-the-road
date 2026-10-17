
int FUN_004147a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *local_24;
  int *local_20;
  int local_1c;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c5e0;
  local_c = ExceptionList;
  uVar5 = 0xfffffffe;
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 1:
  case 2:
  case 7:
  case 8:
  case 9:
    uVar5 = 1;
    ExceptionList = &local_c;
    break;
  default:
    ExceptionList = &local_c;
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xe9e,s_Internal_error_0374_0066c03c,
                 &DAT_0068c120,&DAT_0068c120);
    break;
  case 5:
    uVar5 = 3;
    ExceptionList = &local_c;
    break;
  case 6:
    uVar5 = 2;
    ExceptionList = &local_c;
  }
  FUN_00455fa0(&local_24,DAT_006898b8,DAT_006898bc,uVar5,0xffffffff);
  piVar1 = local_24;
  local_4 = 0;
  if (local_24 != local_20) {
    switch(*(undefined4 *)(param_1 + 0x54)) {
    case 1:
    case 2:
    case 5:
    case 6:
      FUN_0045c860(local_24,local_20,0,0,param_1);
      break;
    default:
      FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                   s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xeba,s_Internal_error_0374_0066c03c,
                   &DAT_0068c120,&DAT_0068c120);
      break;
    case 7:
    case 8:
    case 9:
      FUN_00462290(local_24,local_20);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (local_10 == 0) {
        FUN_004652d0(piVar1,local_20,param_1);
      }
      else {
        FUN_00465490(piVar1,local_20,local_10,local_14,param_1);
      }
      local_4 = local_4 & 0xffffff00;
      FUN_0046ede0();
    }
    iVar2 = (*local_24 - DAT_006898b8) / 0x38;
    iVar3 = local_1c - (int)local_24 >> 2;
    if (iVar3 != 0) {
      uVar4 = iVar3 * 4;
      if (0x80 < uVar4) {
        FUN_0061c888(local_24);
        ExceptionList = local_c;
        return iVar2;
      }
      FUN_00401aa0();
      *local_24 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = local_24;
      DAT_0068c164 = 0;
    }
    ExceptionList = local_c;
    return iVar2;
  }
  FUN_00401010(0,0x100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xea5,s_No_identity_found_0066c028,
               &DAT_0068c120,&DAT_0068c120);
  iVar2 = local_1c - (int)local_24 >> 2;
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_0044b440(local_24,iVar2 * 4);
  }
  ExceptionList = local_c;
  return -1;
}

