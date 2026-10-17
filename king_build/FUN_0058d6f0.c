
uint __thiscall
FUN_0058d6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            uint param_6)

{
  uint uVar1;
  undefined1 local_3f0 [100];
  undefined1 local_38c [100];
  undefined1 local_328 [100];
  undefined1 local_2c4 [100];
  undefined1 local_260 [100];
  undefined1 local_1fc [504];
  
  if ((param_6 & 4) != 0) {
    uVar1 = FUN_00583aa0();
    if (((DAT_006f5580 != 0) && ((uVar1 & 1) != 0)) && (*(int *)(param_5 + 0x74) == 0)) {
      FUN_0061c369();
      FUN_0061c369(local_38c,s_old_pos__6_3f__6_3f__6_3f_0067ccb0,
                   (double)*(float *)(param_1 + 0x248),(double)*(float *)(param_1 + 0x24c),
                   (double)*(float *)(param_1 + 0x250));
      FUN_0061c369(local_3f0,s_new_pos_6_3f__6_3f__6_3f_0067cc94,(double)*(float *)(param_1 + 0x218)
                   ,(double)*(float *)(param_1 + 0x21c),(double)*(float *)(param_1 + 0x220));
      FUN_0061c369(local_328,s_colP_at__6_3f__6_3f__6_3f_0067cc78,(double)*(float *)(param_5 + 0x34)
                   ,(double)*(float *)(param_5 + 0x38),(double)*(float *)(param_5 + 0x3c));
      FUN_0061c369(local_260,s_colN__6_3f__6_3f__6_3f_0067cc5c,(double)*(float *)(param_5 + 0x40),
                   (double)*(float *)(param_5 + 0x44),(double)*(float *)(param_5 + 0x48));
      FUN_0061c369(local_1fc,s__s_s_s_s_s_0067cc50,local_2c4,local_38c,local_3f0,local_328,local_260
                  );
      FUN_004e9574();
      FUN_004e9b5b(local_1fc);
      FUN_004e9620();
    }
    return uVar1;
  }
  if ((param_6 & 2) != 0) {
    uVar1 = FUN_00584c80(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = FUN_0058a820(param_1,param_2,param_3,param_4,param_5,param_6);
  if (uVar1 != 0) {
    FUN_0058c630();
  }
  return uVar1;
}

