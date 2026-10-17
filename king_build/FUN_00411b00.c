
void FUN_00411b00(undefined4 param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  int iStack_a8;
  int *local_a4 [2];
  uint uStack_9c;
  undefined4 uStack_98;
  int *apiStack_94 [2];
  uint uStack_8c;
  int iStack_88;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063c2b8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00409000(local_a4,&param_2);
  local_4._0_1_ = 1;
  if ((((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
      (param_2[1] = param_2[1] + -1, param_2[1] == 0)) &&
     ((cVar1 = FUN_00408fd0(&param_2,piVar2), cVar1 == '\0' && (param_2 != (int *)0x0)))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar2[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar2;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar2[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar2;
    param_3 = piVar2[1];
  }
  local_4._0_1_ = 0;
  if ((((uStack_9c & 0x10000) == 0) && (local_a4[0] != (int *)0x0)) &&
     ((local_a4[0][1] = local_a4[0][1] + -1, local_a4[0][1] == 0 && (local_a4[0] != (int *)0x0)))) {
    (**(code **)(*local_a4[0] + 0xc))(1);
  }
  piVar2 = (int *)FUN_00407e60(local_a4,&param_2);
  local_4._0_1_ = 2;
  FUN_00436650(&uStack_98,*(undefined4 *)(*piVar2 + 0xc));
  local_4._0_1_ = 0;
  if (((((uStack_9c & 0x10000) == 0) && (local_a4[0] != (int *)0x0)) &&
      (local_a4[0][1] = local_a4[0][1] + -1, local_a4[0][1] == 0)) && (local_a4[0] != (int *)0x0)) {
    (**(code **)(*local_a4[0] + 0xc))(1);
  }
  piVar2 = (int *)FUN_00409000(local_a4,&param_2);
  local_4._0_1_ = 3;
  if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
     ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
      ((cVar1 = FUN_00408fd0(&param_2,piVar2), cVar1 == '\0' && (param_2 != (int *)0x0)))))) {
    (**(code **)(*param_2 + 0xc))(1);
  }
  param_4 = piVar2[2];
  if ((param_4 & 0x10000) == 0) {
    param_3 = 0;
    param_2 = (int *)*piVar2;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)0x0;
      param_4 = 0;
    }
    else {
      param_4 = piVar2[2];
      param_2[1] = param_2[1] + 1;
    }
  }
  else {
    param_2 = (int *)*piVar2;
    param_3 = piVar2[1];
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (((((uStack_9c & 0x10000) == 0) && (local_a4[0] != (int *)0x0)) &&
      (local_a4[0][1] = local_a4[0][1] + -1, local_a4[0][1] == 0)) && (local_a4[0] != (int *)0x0)) {
    (**(code **)(*local_a4[0] + 0xc))(1);
  }
  while ((char)param_4 == '\x02') {
    iVar3 = FUN_00407e60(auStack_6c,&param_2);
    cVar1 = *(char *)(iVar3 + 8);
    FUN_00492340();
    if (cVar1 != '\x02') break;
    FUN_00407e60(local_a4,&param_2);
    local_4._0_1_ = 5;
    iStack_88 = FUN_00631d33(0x30);
    local_4._0_1_ = 6;
    if (iStack_88 == 0) {
      iStack_a8 = 0;
    }
    else {
      iStack_a8 = FUN_00412200();
    }
    uVar4 = FUN_00407e60(auStack_84,local_a4);
    local_4._0_1_ = 7;
    cVar1 = FUN_004b6670(uVar4,s_UNCONDITIONAL_0066bed8);
    local_4._0_1_ = 5;
    FUN_00492340();
    if (cVar1 == '\0') {
      uVar4 = FUN_00407e60(auStack_3c,local_a4);
      local_4._0_1_ = 8;
      cVar1 = FUN_004b6670(uVar4,s_DAYONLY_0066bed0);
      local_4._0_1_ = 5;
      FUN_00492340();
      if (cVar1 == '\0') {
        uVar4 = FUN_00407e60(auStack_54,local_a4);
        local_4._0_1_ = 9;
        cVar1 = FUN_004b6670(uVar4,s_GOODWEATHER_0066bec4);
        local_4._0_1_ = 5;
        FUN_00492340();
        if (cVar1 == '\0') {
          uVar4 = FUN_00407e60(auStack_24,local_a4);
          local_4._0_1_ = 10;
          cVar1 = FUN_004b6670(uVar4,s_DAYGW_0066bebc);
          local_4._0_1_ = 5;
          FUN_00492340();
          if (cVar1 == '\0') {
            FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xcd3,s_Undefined_0066beb0,
                         &DAT_0068c120,&DAT_0068c120);
          }
          else {
            *(undefined4 *)(iStack_a8 + 0x20) = 4;
          }
        }
        else {
          *(undefined4 *)(iStack_a8 + 0x20) = 3;
        }
      }
      else {
        *(undefined4 *)(iStack_a8 + 0x20) = 2;
      }
    }
    else {
      *(undefined4 *)(iStack_a8 + 0x20) = 1;
    }
    uVar4 = FUN_00409000(auStack_78,local_a4);
    local_4._0_1_ = 0xb;
    FUN_0040c060(uVar4);
    local_4._0_1_ = 5;
    FUN_00492340();
    piVar2 = (int *)FUN_00407e60(auStack_60,local_a4);
    local_4._0_1_ = 0xc;
    FUN_0044c100(*piVar2 + 0xc);
    local_4._0_1_ = 5;
    FUN_00492340();
    piVar2 = (int *)FUN_00407e60(auStack_48,local_a4);
    local_4._0_1_ = 0xd;
    FUN_0044c100(*piVar2 + 0xc);
    local_4._0_1_ = 5;
    FUN_00492340();
    uVar4 = FUN_00409000(auStack_30,local_a4);
    local_4._0_1_ = 0xe;
    FUN_0040c060(uVar4);
    local_4._0_1_ = 5;
    FUN_00492340();
    FUN_00407e60(auStack_18,local_a4);
    local_4._0_1_ = 0xf;
    fVar5 = (float10)FUN_004b0f20();
    local_4._0_1_ = 5;
    *(double *)(iStack_a8 + 0x28) = (double)fVar5;
    FUN_00492340();
    *(undefined4 *)(iStack_a8 + 0xc) = uStack_98;
    FUN_00447a60(&iStack_a8);
    local_4._0_1_ = 0;
    FUN_00492340();
    piVar2 = (int *)FUN_00409000(apiStack_94,&param_2);
    local_4._0_1_ = 4;
    if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
       ((param_2[1] = param_2[1] + -1, param_2[1] == 0 &&
        ((cVar1 = FUN_00408fd0(&param_2,piVar2), cVar1 == '\0' && (param_2 != (int *)0x0)))))) {
      (**(code **)(*param_2 + 0xc))(1);
    }
    param_4 = piVar2[2];
    if ((param_4 & 0x10000) == 0) {
      param_3 = 0;
      param_2 = (int *)*piVar2;
      if (param_2 == (int *)0x0) {
        param_2 = (int *)0x0;
        param_4 = 0;
      }
      else {
        param_4 = piVar2[2];
        param_2[1] = param_2[1] + 1;
      }
    }
    else {
      param_2 = (int *)*piVar2;
      param_3 = piVar2[1];
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (((((uStack_8c & 0x10000) == 0) && (apiStack_94[0] != (int *)0x0)) &&
        (apiStack_94[0][1] = apiStack_94[0][1] + -1, apiStack_94[0][1] == 0)) &&
       (apiStack_94[0] != (int *)0x0)) {
      (**(code **)(*apiStack_94[0] + 0xc))(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return;
}

