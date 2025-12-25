import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ms/Documents/NSU2025_late/Robototechnics/Archive_22.12/install/action_cl_andr'
