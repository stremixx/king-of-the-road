
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c3320(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  float10 fVar8;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  double local_160;
  double local_158;
  int local_150;
  int local_14c [8];
  undefined1 local_12c [8];
  int local_124;
  int local_120;
  undefined4 local_10c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006480ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022a0();
  local_4 = 0;
  local_164 = 0;
  fVar7 = (float10)thunk_FUN_00603580();
  local_160 = (double)fVar7;
  local_4 = 1;
  _DAT_00706ee8 = (double)CONCAT44(_DAT_00706eec,_DAT_00706ee8);
  if ((*(int *)(param_1 + 0x1a0) == 0) ||
     (_DAT_00706ee8 = (double)CONCAT44(_DAT_00706eec,_DAT_00706ee8), *(int *)(param_1 + 0x1a4) != 0)
     ) goto LAB_005c35be;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    fVar7 = (float10)thunk_FUN_00603580();
    local_158 = (double)CONCAT44(_DAT_00706eec,_DAT_00706ee8) + _DAT_0064a5e0;
    fVar8 = (float10)thunk_FUN_00603580();
    if ((float10)local_158 < fVar8) {
      _DAT_00706ee8 = (double)fVar7;
      FUN_00600d60();
      iVar2 = FUN_00601280(*(undefined4 *)(param_1 + 0x1a8),0,8,s_vrgroup_0067e7c0);
      if (iVar2 != 0) goto LAB_005c35be;
      *(undefined4 *)(param_1 + 0x1ac) = 1;
    }
    if (*(int *)(param_1 + 0x1ac) == 0) goto LAB_005c35be;
  }
  fVar7 = (float10)thunk_FUN_00603580();
  local_158 = _DAT_00706ee8 + _DAT_0064a720;
  fVar8 = (float10)thunk_FUN_00603580();
  if ((float10)local_158 < fVar8) {
    FUN_006022c0();
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_4._0_1_ = 2;
    FUN_006027f0(0x386,param_2,~uVar3);
    FUN_00601820(local_124,local_120 - local_124);
    local_4 = CONCAT31(local_4._1_3_,1);
    _DAT_00706ee8 = (double)fVar7;
    FUN_00602560();
  }
  FUN_006022c0();
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar2 = FUN_006006d0(&local_170);
  while (iVar2 == 0) {
    if (local_170 == 4) {
      FUN_00602850(local_16c,local_168);
      iVar2 = FUN_006029d0();
      while (iVar2 == 0) {
        iVar2 = FUN_006028c0(&local_150);
        if (iVar2 != 0) break;
        if (local_150 == 0x78) {
          iVar2 = FUN_00602bc0(local_14c,&local_10c,local_12c);
          if ((iVar2 == 0) && (local_14c[0] == 0x385)) {
            if ((char)(local_10c >> 8) == -1) {
              FUN_005c3150();
              goto LAB_005c35ae;
            }
            *(uint *)(param_1 + 0x1b4) = local_10c >> 8 & 0xff;
            *(uint *)(param_1 + 0x1b0) = local_10c & 0xff;
            uVar3 = 0xffffffff;
            pcVar5 = (char *)((int)&local_10c + 2);
            goto code_r0x005c3578;
          }
        }
        iVar2 = FUN_006029e0();
      }
    }
    iVar2 = FUN_006006d0(&local_170);
  }
  goto LAB_005c35ae;
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
    if (cVar1 == '\0') break;
code_r0x005c3578:
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 1;
  uVar3 = ~uVar3;
  *(undefined4 *)(param_1 + 0x19c) = local_164;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_3 = param_3 + 1;
  }
LAB_005c35ae:
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00602560();
LAB_005c35be:
  local_4 = 0xffffffff;
  FUN_006022b0();
  ExceptionList = local_c;
  return;
}

