
undefined4 __thiscall FUN_005f3410(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  fVar1 = *(float *)(param_3 + 0x215c);
  dVar3 = *(double *)(param_3 + 0x2110);
  uVar8 = *(undefined4 *)(param_3 + 0x2160);
  uVar5 = *(undefined4 *)(param_3 + 0x2140);
  uVar6 = *(undefined4 *)(param_3 + 0x2144);
  uVar7 = DAT_00701dec & 4;
  fVar2 = *(float *)(param_3 + 0x2158);
  dVar4 = *(double *)(param_3 + 0x2110);
  if (*(int *)(param_1 + 0x60) < 0) {
    DAT_00701dec = DAT_00701dec & 0xfffffffb;
  }
  else {
    DAT_00701dec = DAT_00701dec | 4;
  }
  FUN_005ad390(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
               *(undefined4 *)(param_1 + 0x60));
  FUN_005ad500(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
               *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  FUN_005f16f0(0,param_2,param_3);
  DAT_00701dec = DAT_00701dec & 0xfffffffb;
  if (uVar7 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    DAT_00701dec = DAT_00701dec | uVar7;
  }
  FUN_005ad390((double)(fVar1 * (float)dVar3),(double)(fVar2 * (float)dVar4),uVar8);
  FUN_005ad500(uVar5,uVar6,0,0xbff00000,0,0xbff00000);
  return 1;
}

