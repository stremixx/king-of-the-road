
undefined4 __thiscall FUN_005b98d0(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 0x324) * param_2;
  return *(undefined4 *)
          (*(int *)(param_1 + 0x10) + ((int)(param_2 + (param_2 >> 0x1f & 0xffU)) >> 8) * 4);
}

