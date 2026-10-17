
undefined8 __fastcall
FUN_005fe13e(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
            uint param_5)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  
  puVar1 = param_3;
  if ((param_5 & 1) != 0) {
    puVar1 = (undefined4 *)((int)param_3 + 2);
    *(undefined2 *)param_3 = param_4;
  }
  for (param_5 = param_5 >> 1; param_5 != 0; param_5 = param_5 - 1) {
    *puVar1 = CONCAT22(param_4,param_4);
    puVar1 = puVar1 + 1;
  }
  return CONCAT44(param_2,in_EAX);
}

