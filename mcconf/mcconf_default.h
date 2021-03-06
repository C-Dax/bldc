// This file is autogenerated by VESC Tool

#ifndef MOTOR1_MOTOR_H_
#define MOTOR1_MOTOR_H_

// PWM Mode
#ifndef MCCONF_PWM_MODE
#define MCCONF_PWM_MODE 1
#endif

// Commutation Mode
#ifndef MCCONF_COMM_MODE
#define MCCONF_COMM_MODE 0
#endif

// Motor Type
#ifndef MCCONF_DEFAULT_MOTOR_TYPE
#define MCCONF_DEFAULT_MOTOR_TYPE 2
#endif

// Sensor Mode
#ifndef MCCONF_SENSOR_MODE
#define MCCONF_SENSOR_MODE 0
#endif

// Motor Current Max
#ifndef MCCONF_L_CURRENT_MAX
#define MCCONF_L_CURRENT_MAX 40
#endif

// Motor Current Max Brake
#ifndef MCCONF_L_CURRENT_MIN
#define MCCONF_L_CURRENT_MIN -40
#endif

// Battery Current Max
#ifndef MCCONF_L_IN_CURRENT_MAX
#define MCCONF_L_IN_CURRENT_MAX 99
#endif

// Battery Current Max Regen
#ifndef MCCONF_L_IN_CURRENT_MIN
#define MCCONF_L_IN_CURRENT_MIN -60
#endif

// Absolute Maximum Current
#ifndef MCCONF_L_MAX_ABS_CURRENT
#define MCCONF_L_MAX_ABS_CURRENT 150
#endif

// Max ERPM Reverse
#ifndef MCCONF_L_RPM_MIN
#define MCCONF_L_RPM_MIN -100000
#endif

// Max ERPM
#ifndef MCCONF_L_RPM_MAX
#define MCCONF_L_RPM_MAX 100000
#endif

// ERPM Limit Start
#ifndef MCCONF_L_RPM_START
#define MCCONF_L_RPM_START 0.8
#endif

// Max ERPM Full Brake
#ifndef MCCONF_L_CURR_MAX_RPM_FBRAKE
#define MCCONF_L_CURR_MAX_RPM_FBRAKE 300
#endif

// Max ERPM Full Brake Current Control
#ifndef MCCONF_L_CURR_MAX_RPM_FBRAKE_CC
#define MCCONF_L_CURR_MAX_RPM_FBRAKE_CC 1500
#endif

// Minimum Input Voltage
#ifndef MCCONF_L_MIN_VOLTAGE
#define MCCONF_L_MIN_VOLTAGE 8
#endif

// Maximum Input Voltage
#ifndef MCCONF_L_MAX_VOLTAGE
#define MCCONF_L_MAX_VOLTAGE 57
#endif

// Battery Voltage Cutoff Start
#ifndef MCCONF_L_BATTERY_CUT_START
#define MCCONF_L_BATTERY_CUT_START 10
#endif

// Battery Voltage Cutoff End
#ifndef MCCONF_L_BATTERY_CUT_END
#define MCCONF_L_BATTERY_CUT_END 8
#endif

// Slow ABS Current Limit
#ifndef MCCONF_L_SLOW_ABS_OVERCURRENT
#define MCCONF_L_SLOW_ABS_OVERCURRENT 1
#endif

// MOSFET Temp Cutoff Start
#ifndef MCCONF_L_LIM_TEMP_FET_START
#define MCCONF_L_LIM_TEMP_FET_START 85
#endif

// MOSFET Temp Cutoff End
#ifndef MCCONF_L_LIM_TEMP_FET_END
#define MCCONF_L_LIM_TEMP_FET_END 100
#endif

// Motor Temp Cutoff Start
#ifndef MCCONF_L_LIM_TEMP_MOTOR_START
#define MCCONF_L_LIM_TEMP_MOTOR_START 85
#endif

// Motor Temp Cutoff End
#ifndef MCCONF_L_LIM_TEMP_MOTOR_END
#define MCCONF_L_LIM_TEMP_MOTOR_END 100
#endif

// Acceleration Temperature Decrease
#ifndef MCCONF_L_LIM_TEMP_ACCEL_DEC
#define MCCONF_L_LIM_TEMP_ACCEL_DEC 0.15
#endif

// Minimum Duty Cycle
#ifndef MCCONF_L_MIN_DUTY
#define MCCONF_L_MIN_DUTY 0.005
#endif

// Maximum Duty Cycle
#ifndef MCCONF_L_MAX_DUTY
#define MCCONF_L_MAX_DUTY 0.95
#endif

// Maximum Wattage
#ifndef MCCONF_L_WATT_MAX
#define MCCONF_L_WATT_MAX 1.5e+6
#endif

// Maximum Braking Wattage
#ifndef MCCONF_L_WATT_MIN
#define MCCONF_L_WATT_MIN -1.5e+6
#endif

// Max Current Scale
#ifndef MCCONF_L_CURRENT_MAX_SCALE
#define MCCONF_L_CURRENT_MAX_SCALE 1
#endif

// Min Current Scale
#ifndef MCCONF_L_CURRENT_MIN_SCALE
#define MCCONF_L_CURRENT_MIN_SCALE 1
#endif

// Minimum ERPM
#ifndef MCCONF_SL_MIN_RPM
#define MCCONF_SL_MIN_RPM 150
#endif

// Minimum ERPM Integrator
#ifndef MCCONF_SL_MIN_ERPM_CYCLE_INT_LIMIT
#define MCCONF_SL_MIN_ERPM_CYCLE_INT_LIMIT 1100
#endif

// Max Brake Current at Direction Change
#ifndef MCCONF_SL_MAX_FB_CURR_DIR_CHANGE
#define MCCONF_SL_MAX_FB_CURR_DIR_CHANGE 10
#endif

// Cycle Integrator Limit
#ifndef MCCONF_SL_CYCLE_INT_LIMIT
#define MCCONF_SL_CYCLE_INT_LIMIT 62
#endif

// Phase Advance at BR ERPM
#ifndef MCCONF_SL_PHASE_ADVANCE_AT_BR
#define MCCONF_SL_PHASE_ADVANCE_AT_BR 0.8
#endif

// BR ERPM
#ifndef MCCONF_SL_CYCLE_INT_BR
#define MCCONF_SL_CYCLE_INT_BR 80000
#endif

// BEMF Coupling
#ifndef MCCONF_SL_BEMF_COUPLING_K
#define MCCONF_SL_BEMF_COUPLING_K 600
#endif

// Hall Table [0]
#ifndef MCCONF_HALL_TAB_0
#define MCCONF_HALL_TAB_0 -1
#endif

// Hall Table [1]
#ifndef MCCONF_HALL_TAB_1
#define MCCONF_HALL_TAB_1 1
#endif

// Hall Table [2]
#ifndef MCCONF_HALL_TAB_2
#define MCCONF_HALL_TAB_2 3
#endif

// Hall Table [3]
#ifndef MCCONF_HALL_TAB_3
#define MCCONF_HALL_TAB_3 2
#endif

// Hall Table [4]
#ifndef MCCONF_HALL_TAB_4
#define MCCONF_HALL_TAB_4 5
#endif

// Hall Table [5]
#ifndef MCCONF_HALL_TAB_5
#define MCCONF_HALL_TAB_5 6
#endif

// Hall Table [6]
#ifndef MCCONF_HALL_TAB_6
#define MCCONF_HALL_TAB_6 4
#endif

// Hall Table [7]
#ifndef MCCONF_HALL_TAB_7
#define MCCONF_HALL_TAB_7 -1
#endif

// Sensorless ERPM Hybrid
#ifndef MCCONF_HALL_ERPM
#define MCCONF_HALL_ERPM 2000
#endif

// Current KP
#ifndef MCCONF_FOC_CURRENT_KP
#define MCCONF_FOC_CURRENT_KP 0.0895
#endif

// Current KI
#ifndef MCCONF_FOC_CURRENT_KI
#define MCCONF_FOC_CURRENT_KI 56.8
#endif

// Switching Frequency
#ifndef MCCONF_FOC_F_SW
#define MCCONF_FOC_F_SW 20000
#endif

// Dead Time Compensation
#ifndef MCCONF_FOC_DT_US
#define MCCONF_FOC_DT_US 0.08
#endif

// Encoder Inverted
#ifndef MCCONF_FOC_ENCODER_INVERTED
#define MCCONF_FOC_ENCODER_INVERTED 0
#endif

// Encoder Offset
#ifndef MCCONF_FOC_ENCODER_OFFSET
#define MCCONF_FOC_ENCODER_OFFSET 180
#endif

// Encoder Ratio
#ifndef MCCONF_FOC_ENCODER_RATIO
#define MCCONF_FOC_ENCODER_RATIO 7
#endif

// Sin/Cos Sine Gain Compensation
#ifndef MCCONF_FOC_ENCODER_SIN_GAIN
#define MCCONF_FOC_ENCODER_SIN_GAIN 1
#endif

// Sin/Cos Cosine Gain Compensation
#ifndef MCCONF_FOC_ENCODER_COS_GAIN
#define MCCONF_FOC_ENCODER_COS_GAIN 1
#endif

// Sin/Cos Sine Offset
#ifndef MCCONF_FOC_ENCODER_SIN_OFFSET
#define MCCONF_FOC_ENCODER_SIN_OFFSET 1.65
#endif

// Sin/Cos Sine Offset
#ifndef MCCONF_FOC_ENCODER_COS_OFFSET
#define MCCONF_FOC_ENCODER_COS_OFFSET 1.65
#endif

// Sin/Cos Filter Constant
#ifndef MCCONF_FOC_ENCODER_SINCOS_FILTER
#define MCCONF_FOC_ENCODER_SINCOS_FILTER 0.5
#endif

// Sensor Mode
#ifndef MCCONF_FOC_SENSOR_MODE
#define MCCONF_FOC_SENSOR_MODE 2
#endif

// Speed Tracker Kp
#ifndef MCCONF_FOC_PLL_KP
#define MCCONF_FOC_PLL_KP 2000
#endif

// Speed Tracker Ki
#ifndef MCCONF_FOC_PLL_KI
#define MCCONF_FOC_PLL_KI 30000
#endif

// Motor Inductance (L)
#ifndef MCCONF_FOC_MOTOR_L
#define MCCONF_FOC_MOTOR_L 8.955e-5
#endif

// Motor Resistance (R)
#ifndef MCCONF_FOC_MOTOR_R
#define MCCONF_FOC_MOTOR_R 0.0568
#endif

// Motor Flux Linkage (λ)
#ifndef MCCONF_FOC_MOTOR_FLUX_LINKAGE
#define MCCONF_FOC_MOTOR_FLUX_LINKAGE 0.018826
#endif

// Observer Gain (x1M)
#ifndef MCCONF_FOC_OBSERVER_GAIN
#define MCCONF_FOC_OBSERVER_GAIN 2.82e+6
#endif

// Observer Gain At Minimum Duty
#ifndef MCCONF_FOC_OBSERVER_GAIN_SLOW
#define MCCONF_FOC_OBSERVER_GAIN_SLOW 0.3
#endif

// Duty Downramp Kp
#ifndef MCCONF_FOC_DUTY_DOWNRAMP_KP
#define MCCONF_FOC_DUTY_DOWNRAMP_KP 10
#endif

// Duty Downramp Ki
#ifndef MCCONF_FOC_DUTY_DOWNRAMP_KI
#define MCCONF_FOC_DUTY_DOWNRAMP_KI 200
#endif

// Openloop ERPM
#ifndef MCCONF_FOC_OPENLOOP_RPM
#define MCCONF_FOC_OPENLOOP_RPM 400
#endif

// Openloop Hysteresis
#ifndef MCCONF_FOC_SL_OPENLOOP_HYST
#define MCCONF_FOC_SL_OPENLOOP_HYST 0.1
#endif

// Openloop Time
#ifndef MCCONF_FOC_SL_OPENLOOP_TIME
#define MCCONF_FOC_SL_OPENLOOP_TIME 0.1
#endif

// D Current Injection Duty
#ifndef MCCONF_FOC_SL_D_CURRENT_DUTY
#define MCCONF_FOC_SL_D_CURRENT_DUTY 0
#endif

// D Current Injection Factor
#ifndef MCCONF_FOC_SL_D_CURRENT_FACTOR
#define MCCONF_FOC_SL_D_CURRENT_FACTOR 0
#endif

// Hall Table [0]
#ifndef MCCONF_FOC_HALL_TAB_0
#define MCCONF_FOC_HALL_TAB_0 255
#endif

// Hall Table [1]
#ifndef MCCONF_FOC_HALL_TAB_1
#define MCCONF_FOC_HALL_TAB_1 196
#endif

// Hall Table [2]
#ifndef MCCONF_FOC_HALL_TAB_2
#define MCCONF_FOC_HALL_TAB_2 62
#endif

// Hall Table [3]
#ifndef MCCONF_FOC_HALL_TAB_3
#define MCCONF_FOC_HALL_TAB_3 31
#endif

// Hall Table [4]
#ifndef MCCONF_FOC_HALL_TAB_4
#define MCCONF_FOC_HALL_TAB_4 132
#endif

// Hall Table [5]
#ifndef MCCONF_FOC_HALL_TAB_5
#define MCCONF_FOC_HALL_TAB_5 162
#endif

// Hall Table [6]
#ifndef MCCONF_FOC_HALL_TAB_6
#define MCCONF_FOC_HALL_TAB_6 97
#endif

// Hall Table [7]
#ifndef MCCONF_FOC_HALL_TAB_7
#define MCCONF_FOC_HALL_TAB_7 255
#endif

// Sensorless ERPM
#ifndef MCCONF_FOC_SL_ERPM
#define MCCONF_FOC_SL_ERPM 2500
#endif

// Sample in V0 and V7
#ifndef MCCONF_FOC_SAMPLE_V0_V7
#define MCCONF_FOC_SAMPLE_V0_V7 0
#endif

// High Current Sampling Mode
#ifndef MCCONF_FOC_SAMPLE_HIGH_CURRENT
#define MCCONF_FOC_SAMPLE_HIGH_CURRENT 0
#endif

// Stator Saturation Compensation
#ifndef MCCONF_FOC_SAT_COMP
#define MCCONF_FOC_SAT_COMP 0
#endif

// Temp Comp
#ifndef MCCONF_FOC_TEMP_COMP
#define MCCONF_FOC_TEMP_COMP 0
#endif

// Temp Comp Base Temp
#ifndef MCCONF_FOC_TEMP_COMP_BASE_TEMP
#define MCCONF_FOC_TEMP_COMP_BASE_TEMP 25
#endif

// Current Filter Constant
#ifndef MCCONF_FOC_CURRENT_FILTER_CONST
#define MCCONF_FOC_CURRENT_FILTER_CONST 0.1
#endif

// Buffer Notification Length
#ifndef MCCONF_GPD_BUFFER_NOTIFY_LEFT
#define MCCONF_GPD_BUFFER_NOTIFY_LEFT 200
#endif

// Buffer Sampling Interpolation
#ifndef MCCONF_GPD_BUFFER_INTERPOL
#define MCCONF_GPD_BUFFER_INTERPOL 0
#endif

// Current Filter Constant
#ifndef MCCONF_GPD_CURRENT_FILTER_CONST
#define MCCONF_GPD_CURRENT_FILTER_CONST 0.1
#endif

// Current KP
#ifndef MCCONF_GPD_CURRENT_KP
#define MCCONF_GPD_CURRENT_KP 0.03
#endif

// Current KI
#ifndef MCCONF_GPD_CURRENT_KI
#define MCCONF_GPD_CURRENT_KI 50
#endif

// Speed PID Kp
#ifndef MCCONF_S_PID_KP
#define MCCONF_S_PID_KP 0.004
#endif

// Speed PID Ki
#ifndef MCCONF_S_PID_KI
#define MCCONF_S_PID_KI 0.004
#endif

// Speed PID Kd
#ifndef MCCONF_S_PID_KD
#define MCCONF_S_PID_KD 0.0001
#endif

// Speed PID Kd Filer
#ifndef MCCONF_S_PID_KD_FILTER
#define MCCONF_S_PID_KD_FILTER 0.2
#endif

// Minimum ERPM
#ifndef MCCONF_S_PID_MIN_RPM
#define MCCONF_S_PID_MIN_RPM 900
#endif

// Allow Braking
#ifndef MCCONF_S_PID_ALLOW_BRAKING
#define MCCONF_S_PID_ALLOW_BRAKING 1
#endif

// Position PID Kp
#ifndef MCCONF_P_PID_KP
#define MCCONF_P_PID_KP 0.03
#endif

// Position PID Ki
#ifndef MCCONF_P_PID_KI
#define MCCONF_P_PID_KI 0
#endif

// Position PID Kd
#ifndef MCCONF_P_PID_KD
#define MCCONF_P_PID_KD 0.0004
#endif

// Position PID Kd Filer
#ifndef MCCONF_P_PID_KD_FILTER
#define MCCONF_P_PID_KD_FILTER 0.2
#endif

// Position Angle Division
#ifndef MCCONF_P_PID_ANG_DIV
#define MCCONF_P_PID_ANG_DIV 1
#endif

// Startup boost
#ifndef MCCONF_CC_STARTUP_BOOST_DUTY
#define MCCONF_CC_STARTUP_BOOST_DUTY 0.01
#endif

// Minimum Current
#ifndef MCCONF_CC_MIN_CURRENT
#define MCCONF_CC_MIN_CURRENT 0.1
#endif

// Current Controller Gain
#ifndef MCCONF_CC_GAIN
#define MCCONF_CC_GAIN 0.0046
#endif

// Current Control Ramp Step Max
#ifndef MCCONF_CC_RAMP_STEP
#define MCCONF_CC_RAMP_STEP 0.04
#endif

// Fault Stop Time
#ifndef MCCONF_M_FAULT_STOP_TIME
#define MCCONF_M_FAULT_STOP_TIME 500
#endif

// Duty Ramp Step Max
#ifndef MCCONF_M_RAMP_STEP
#define MCCONF_M_RAMP_STEP 0.02
#endif

// Current Backoff Gain
#ifndef MCCONF_M_CURRENT_BACKOFF_GAIN
#define MCCONF_M_CURRENT_BACKOFF_GAIN 0.5
#endif

// ABI Encoder Counts
#ifndef MCCONF_M_ENCODER_COUNTS
#define MCCONF_M_ENCODER_COUNTS 8192
#endif

// Sensor Port Mode
#ifndef MCCONF_M_SENSOR_PORT_MODE
#define MCCONF_M_SENSOR_PORT_MODE 0
#endif

// Invert Motor Direction
#ifndef MCCONF_M_INVERT_DIRECTION
#define MCCONF_M_INVERT_DIRECTION 1
#endif

// DRV8301 OC Mode
#ifndef MCCONF_M_DRV8301_OC_MODE
#define MCCONF_M_DRV8301_OC_MODE 0
#endif

// DRV8301 OC Adjustment
#ifndef MCCONF_M_DRV8301_OC_ADJ
#define MCCONF_M_DRV8301_OC_ADJ 16
#endif

// Minimum Switching Frequency
#ifndef MCCONF_M_BLDC_F_SW_MIN
#define MCCONF_M_BLDC_F_SW_MIN 3000
#endif

// Maximum Switching Frequency
#ifndef MCCONF_M_BLDC_F_SW_MAX
#define MCCONF_M_BLDC_F_SW_MAX 35000
#endif

// Switching Frequency
#ifndef MCCONF_M_DC_F_SW
#define MCCONF_M_DC_F_SW 25000
#endif

// Beta Value for Motor Thermistor
#ifndef MCCONF_M_NTC_MOTOR_BETA
#define MCCONF_M_NTC_MOTOR_BETA 3380
#endif

// Auxiliary Output Mode
#ifndef MCCONF_M_OUT_AUX_MODE
#define MCCONF_M_OUT_AUX_MODE 0
#endif

// Motor Poles
#ifndef MCCONF_SI_MOTOR_POLES
#define MCCONF_SI_MOTOR_POLES 14
#endif

// Gear Ratio
#ifndef MCCONF_SI_GEAR_RATIO
#define MCCONF_SI_GEAR_RATIO 3
#endif

// Wheel Diameter
#ifndef MCCONF_SI_WHEEL_DIAMETER
#define MCCONF_SI_WHEEL_DIAMETER 0.083
#endif

// Battery Type
#ifndef MCCONF_SI_BATTERY_TYPE
#define MCCONF_SI_BATTERY_TYPE 0
#endif

// Battery Cells Series
#ifndef MCCONF_SI_BATTERY_CELLS
#define MCCONF_SI_BATTERY_CELLS 3
#endif

// Battery Capacity
#ifndef MCCONF_SI_BATTERY_AH
#define MCCONF_SI_BATTERY_AH 6
#endif

// MOTOR1_MOTOR_H_
#endif
