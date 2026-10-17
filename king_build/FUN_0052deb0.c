
void __thiscall FUN_0052deb0(int param_1,int param_2,float param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x184) == 0)) {
    (**(code **)(param_1 + 0xe40))(param_2,(double)param_3);
  }
  FUN_0052f140(*(undefined4 *)(param_1 + 0xe34),0x3f800000,0x3f800000,&DAT_00701580);
  uVar1 = FUN_005ee8e0(0,param_4);
  *(undefined4 *)(param_1 + 0xe38) = uVar1;
  FUN_005e10c0(uVar1,1);
  *(float *)(param_1 + 0xe3c) = (float)*(double *)(DAT_006ee15c + 0xb98);
  return;
}

