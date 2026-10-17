
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005ce070(undefined4 *param_1,int param_2,float param_3,float param_4,float param_5,float param_6
            ,float param_7,float param_8,undefined4 param_9,undefined4 param_10)

{
  float fVar1;
  int iVar2;
  
  if (100 < param_2) {
    param_2 = 100;
  }
  iVar2 = _rand();
  fVar1 = (float)(iVar2 % 10) * (float)_DAT_00650e00;
  FUN_005cdd90(param_9,param_10,param_3 + param_6 * fVar1,param_7 * fVar1 + param_4,
               fVar1 * param_8 + param_5,param_2,&DAT_0070db5c,&DAT_0070de7c,&DAT_0070e00c,
               &DAT_0070e19c,0x9999999a,0x3fb99999);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = param_6;
  param_1[0x29] = param_7;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_00650ddc;
  param_1[0x2a] = param_8;
  return param_1;
}

