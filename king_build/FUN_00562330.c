
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00562330(int param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float local_480;
  float local_47c;
  double local_478;
  float local_46c;
  float local_468;
  float local_464;
  double local_460;
  undefined4 local_458;
  undefined1 local_454 [200];
  undefined1 local_38c [200];
  undefined1 local_2c4 [200];
  undefined1 local_1fc [504];
  
  fVar1 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 100) +
          *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x40) +
          *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x6c);
  dVar2 = _DAT_0064ba38;
  if (_DAT_0064b254 <= fVar1) {
    dVar2 = _DAT_0064a660;
  }
  local_464 = (float)dVar2;
  local_468 = *(float *)(param_1 + 0xca0);
  local_458 = *(undefined4 *)(param_1 + 0x80);
  local_460 = (double)fVar1;
  local_46c = 0.0;
  local_480 = 1.0;
  local_47c = 123456.0;
  local_478._0_4_ = ABS(fVar1);
  fVar4 = (float10)FUN_004e1fd9();
  iVar3 = 0;
  fVar1 = (float)(fVar4 * (float10)_DAT_0064c2e8);
  *(float *)(param_1 + 0x80) = -(_DAT_006f1b9c * local_464);
  do {
    if (local_478._0_4_ <= (float)_DAT_0064a5a8) break;
    fVar4 = (float10)FUN_005614d0(fVar1,local_468,param_2,&local_47c);
    local_468 = (float)fVar4;
    iVar3 = iVar3 + 1;
    local_480 = fVar1 * local_478._0_4_ + local_480 +
                fVar1 * fVar1 * local_47c * (float)_DAT_0064a6d0;
    local_478._0_4_ =
         (fVar1 * local_47c * local_464 + local_478._0_4_) * *(float *)(param_1 + 0xc90);
    local_46c = fVar1 + local_46c;
  } while (iVar3 < 1000);
  if ((float)_DAT_0064a5a8 < local_478._0_4_) {
    local_478 = (double)local_478._0_4_;
    FUN_0061c369(local_38c,s_copter__run__app__stop_dist_tang_0067a34c,
                 (double)*(float *)(param_1 + 0xca0),(double)local_468,
                 (double)*(float *)(param_1 + 0x80),(double)local_464,
                 (double)*(float *)(param_1 + 0xc90),(double)*(float *)(param_1 + 0xc9c));
    FUN_0061c369(local_454,s_V__f__f__f___Y0__f__f__f__Vy__f_v_0067a30c,
                 (double)*(float *)(param_1 + 100),(double)*(float *)(param_1 + 0x68),
                 (double)*(float *)(param_1 + 0x6c),(double)*param_2,(double)param_2[1],
                 (double)param_2[2],local_460._0_4_,(int)((ulonglong)local_460 >> 0x20),
                 local_478._0_4_,(int)((ulonglong)local_478 >> 0x20),(double)local_47c,
                 (double)local_480,(double)fVar1,(double)local_46c);
    FUN_0061c369(local_2c4,s_M_v_3___f__f__f_0067a2f8,(double)*(float *)(param_1 + 0x24),
                 (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x2c));
    uVar7 = CONCAT44(local_2c4,local_454);
    puVar5 = local_1fc;
    uVar6 = CONCAT44(local_38c,s__s_s_s_00679224);
    FUN_0061c369();
    FUN_004e1e9c(local_1fc,puVar5,uVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x80) = local_458;
  return (float10)local_480;
}

