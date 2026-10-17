
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005985f0(int param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  double local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_d4 [12];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  local_f0 = 0.0;
  local_f8 = DAT_00701580 * *param_3 + DAT_00701584 * param_3[3] + DAT_00701588 * param_3[6];
  local_f4 = DAT_00701580 * param_3[1] + DAT_00701584 * param_3[4] + DAT_00701588 * param_3[7];
  pfVar1 = (float *)FUN_005aaad0(&local_ec,&local_f8);
  local_f8 = *pfVar1;
  local_f4 = pfVar1[1];
  local_f0 = pfVar1[2];
  fVar3 = (float10)FUN_0061d420();
  local_100 = (double)fVar3;
  if ((float)_DAT_0064a668 <
      DAT_007015a8 * local_f0 + DAT_007015a4 * local_f4 + DAT_007015a0 * local_f8) {
    local_100 = -local_100;
  }
  pfVar1 = (float *)FUN_00594500(local_d4,*(undefined4 *)(DAT_006d0fd8 + 0x268),1);
  local_e0 = *pfVar1 + param_3[9];
  local_ec = 0;
  local_dc = pfVar1[1] + param_3[10];
  local_d8 = pfVar1[2] + param_3[0xb];
  local_e8 = -(float)*(double *)(param_1 + 0x68);
  local_e4 = (float)((float10)*(double *)(param_1 + 0x68) * (float10)*(double *)(param_1 + 0x68) *
                    (float10)_DAT_0064a648);
  uVar2 = FUN_005ab330(local_68,local_e0,local_dc,local_d8);
  uVar2 = FUN_005ab7d0(local_c8,(float)((float10)local_100 + (float10)*(double *)(param_1 + 0x70)),
                       uVar2);
  uVar2 = FUN_005ab330(local_98,local_ec,local_e8,local_e4,uVar2);
  uVar2 = FUN_005ab130(local_38,uVar2);
  FUN_005ab130(param_2,uVar2);
  return param_2;
}

