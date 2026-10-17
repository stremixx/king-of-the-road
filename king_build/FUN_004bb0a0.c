
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb0a0(undefined4 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006447b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_004bb060();
  if (((iVar3 != 0) && (_DAT_0064b248 <= _DAT_00694f9c)) &&
     (iVar3 = _rand(), (float)iVar3 * _DAT_0064b244 <= _DAT_0064b24c)) {
    if (_DAT_0064b240 < param_3) {
      param_3 = 1.0;
    }
    uVar4 = __ftol();
    if (DAT_006f59cc <= uVar4) {
      fVar1 = param_3 * _DAT_0064b248 + _DAT_0064b240;
      iVar3 = _rand();
      fVar2 = ((float)iVar3 * _DAT_0064b1bc * _DAT_0064b244 + _DAT_0064b240) * fVar1;
      iVar3 = _rand();
      fVar1 = ((float)iVar3 * _DAT_0064b1bc * _DAT_0064b244 + _DAT_0064b240) * fVar1 * _DAT_0064b314
      ;
      iVar3 = FUN_00578a50(200,DAT_006f59fc);
      local_4 = 0;
      if (iVar3 != 0) {
        iVar3 = _rand();
        local_18 = (float)iVar3 * _DAT_0064b244 * _DAT_0064b2f4 + _DAT_0064b24c;
        local_10 = local_18 * param_2[2];
        local_14 = local_18 * param_2[1];
        local_18 = local_18 * *param_2;
        FUN_0059ce80(DAT_00695184,param_1,&local_18,fVar2 + fVar2,fVar1,&DAT_00693960,DAT_00695178,0
                     ,DAT_00693790);
      }
      local_4 = 0xffffffff;
      FUN_0059d0e0(DAT_00693790);
    }
  }
  ExceptionList = local_c;
  return;
}

