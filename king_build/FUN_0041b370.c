
void FUN_0041b370(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_004569c0(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),param_2,
                        param_3,param_4,&DAT_0068a928);
  if (puVar1 != *(undefined4 **)(param_2 + 0x2c)) {
    *param_1 = *puVar1;
    return;
  }
  *param_1 = 0xffffffff;
  return;
}

