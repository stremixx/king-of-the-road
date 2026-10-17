
undefined4 FUN_005e8ff0(int param_1,undefined4 param_2,int param_3)

{
  FUN_0061dd53(param_2,(-(uint)((*(uint *)(param_1 + 0x18) & 4) != 0) & 0xffffffd4) + 0x2c + param_3
               ,0);
  FUN_0061d8bf(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),1,param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return 1;
}

