
int FUN_004e17a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined1 local_d4 [100];
  undefined1 local_70 [100];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006454b4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0052e2b0(param_5);
  if ((iVar1 < 0) || (DAT_006cd2ac <= iVar1)) {
    FUN_0061c369(local_d4,s_createHostTrash__1__AOnumberTech_00672424,param_5,iVar1,
                 *(undefined4 *)(param_3 + 0xc));
    FUN_004e1e9c(local_d4);
  }
  if ((iVar1 < DAT_006cd2b0) || (DAT_006cd2bc <= iVar1)) {
    if (iVar1 == DAT_006cd2bc) {
      if (param_7 == 1) {
        iVar2 = FUN_00631d33(0xe48);
        local_4 = 2;
        if (iVar2 == 0) goto LAB_004e19fd;
        iVar2 = FUN_0052db30(param_1,param_3,iVar1,param_6,1,&LAB_00575d40);
      }
      else {
        iVar2 = FUN_00631d33(0xe48);
        local_4 = 3;
        if (iVar2 == 0) goto LAB_004e19fd;
        iVar2 = FUN_0052d990(param_1,param_2,param_3,param_4,iVar1,param_6,0,&LAB_00575d40);
      }
    }
    else {
      if ((iVar1 < DAT_006cd2c0) || (DAT_006cd2c4 <= iVar1)) goto LAB_004e1a10;
      if (param_7 == 1) {
        iVar2 = FUN_00631d33(0x2550);
        local_4 = 4;
        if (iVar2 == 0) goto LAB_004e19fd;
        iVar2 = FUN_0052ca90(param_1,param_3,iVar1,param_6,1);
      }
      else {
        iVar2 = FUN_00631d33(0x2550);
        local_4 = 5;
        if (iVar2 == 0) goto LAB_004e19fd;
        iVar2 = FUN_0052cbe0(param_1,param_2,param_3,param_4,iVar1,param_6,0);
      }
    }
  }
  else if (param_7 == 1) {
    iVar2 = FUN_00631d33(0x2550);
    local_4 = 0;
    if (iVar2 == 0) goto LAB_004e19fd;
    iVar2 = FUN_0052ad30(param_1,param_3,iVar1,param_6,1);
  }
  else {
    iVar2 = FUN_00631d33(0x2550);
    local_4 = 1;
    if (iVar2 == 0) {
LAB_004e19fd:
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0052af00(param_1,param_2,param_3,param_4,iVar1,param_6,0);
    }
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    ExceptionList = local_c;
    return iVar2;
  }
LAB_004e1a10:
  FUN_0061c369(local_70,s_createHostTrash__2__SubType___d__006723e4,iVar1,param_6,
               *(undefined4 *)(param_3 + 0xc));
  FUN_004e1e9c(local_70);
  ExceptionList = local_c;
  return 0;
}

