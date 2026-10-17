
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005c3190(int param_1)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648070;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022a0();
  local_4 = 0;
  thunk_FUN_00603580();
  local_4 = 1;
  if (*(int *)(param_1 + 0x1a0) == 0) {
    local_4 = 0xffffffff;
    FUN_006022b0();
    ExceptionList = local_c;
    return 0;
  }
  if (*(int *)(param_1 + 0x1a4) != 0) {
    local_4 = 0xffffffff;
    FUN_006022b0();
    ExceptionList = local_c;
    return 0;
  }
  thunk_FUN_00603580();
  if (*(int *)(param_1 + 0x1ac) == 0) {
    fVar3 = (float10)thunk_FUN_00603580();
    dVar1 = (double)CONCAT44(_DAT_00706ee4,_DAT_00706ee0) + _DAT_0064a838;
    fVar4 = (float10)thunk_FUN_00603580();
    _DAT_00706ed8 = (double)CONCAT44(_DAT_00706edc,_DAT_00706ed8);
    if ((float10)dVar1 < fVar4) {
      _DAT_00706ee0 = (double)fVar3;
      FUN_00600d60();
      iVar2 = FUN_00601280(*(undefined4 *)(param_1 + 0x1a8),1,8,s_vrgroup_0067e7c0);
      if (iVar2 == 3) {
        local_4 = 0xffffffff;
        FUN_006022b0();
        ExceptionList = local_c;
        return 0;
      }
      if (iVar2 != 0) goto LAB_005c32fa;
      *(undefined4 *)(param_1 + 0x1ac) = 1;
      _DAT_00706ed8 = (double)fVar3;
    }
    if (*(int *)(param_1 + 0x1ac) == 0) goto LAB_005c32fa;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 2;
LAB_005c32fa:
  local_4 = 0xffffffff;
  FUN_006022b0();
  ExceptionList = local_c;
  return 1;
}

