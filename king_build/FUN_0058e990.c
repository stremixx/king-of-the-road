
void __thiscall FUN_0058e990(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_2 != 1)) {
    if ((param_2 < 0) || (3 < param_2)) {
      FUN_004e1e9c(s__MovingBox__set_Box_Collision_De_0067ce2c);
    }
    *(int *)(param_1 + 0xf8c) = param_2;
    return;
  }
  *(int *)(param_1 + 0xf88) = param_2;
  return;
}

