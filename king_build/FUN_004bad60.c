
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bad60(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644776;
  local_c = ExceptionList;
  if ((((_DAT_0064b248 < _DAT_00694fe4) && ((float)_DAT_0064a830 < *(float *)(DAT_00701518 + 0x218))
       ) && (DAT_006f2320 == 0)) && (((uint)in_stack_00000028 & 2) != 0)) {
    ExceptionList = &local_c;
    fVar4 = (float10)FUN_005aabc0(&stack0x00000010);
    if ((float10)_DAT_0064b310 <= fVar4) {
      in_stack_00000028 = in_stack_0000002c * _DAT_0064b30c;
      fVar1 = in_stack_0000002c * _DAT_0064b308;
      fVar2 = in_stack_0000002c * _DAT_0064b304;
      iVar3 = FUN_00578a50(0xc0,DAT_006f59f4);
      local_4 = 0;
      if (iVar3 != 0) {
        in_stack_0000002c = DAT_00701594 * in_stack_00000028;
        local_28 = DAT_00701598 * in_stack_00000028 + param_3;
        local_2c = param_2 + in_stack_0000002c;
        local_30 = param_1 + DAT_00701590 * in_stack_00000028;
        FUN_0059bde0(DAT_00695184,&local_30,&stack0x00000010,&stack0x0000001c,fVar1,
                     &DAT_00694bb4 + DAT_0069516c * 4,1);
      }
      local_4 = 0xffffffff;
      in_stack_0000002c = (float)FUN_00578a50(0xc0,DAT_006f59f0);
      local_4 = 1;
      if (in_stack_0000002c != 0.0) {
        local_2c = DAT_00701594 * in_stack_00000028;
        local_28 = DAT_00701598 * in_stack_00000028;
        local_20 = local_2c + param_2;
        local_1c = local_28 + param_3;
        local_18 = DAT_00701590 * in_stack_00000028 + param_1 + in_stack_0000001c * _DAT_0064b300;
        local_14 = in_stack_00000020 * _DAT_0064b300 + local_20;
        local_10 = in_stack_00000024 * _DAT_0064b300 + local_1c;
        FUN_0059c5c0(DAT_00695184,&local_18,&stack0x00000010,&stack0x0000001c,fVar2,
                     &DAT_00694bb4 + DAT_0069516c * 4,1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

