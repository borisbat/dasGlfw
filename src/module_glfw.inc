// ------------
// functions
// ------------

#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitors)>(*this, lib, "glfwGetMonitors",SideEffects::worstDefault, "glfwGetMonitors")
	->args({"count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowMonitor)>(*this, lib, "glfwGetWindowMonitor",SideEffects::worstDefault, "glfwGetWindowMonitor")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetClipboardString)>(*this, lib, "glfwSetClipboardString",SideEffects::worstDefault, "glfwSetClipboardString")
	->args({"window","string"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorEnterCallback)>(*this, lib, "glfwSetCursorEnterCallback",SideEffects::worstDefault, "glfwSetCursorEnterCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowFrameSize)>(*this, lib, "glfwGetWindowFrameSize",SideEffects::worstDefault, "glfwGetWindowFrameSize")
	->args({"window","left","top","right","bottom"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGamepadName)>(*this, lib, "glfwGetGamepadName",SideEffects::worstDefault, "glfwGetGamepadName")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickAxes)>(*this, lib, "glfwGetJoystickAxes",SideEffects::worstDefault, "glfwGetJoystickAxes")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTimerValue)>(*this, lib, "glfwGetTimerValue",SideEffects::worstDefault, "glfwGetTimerValue")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorPos)>(*this, lib, "glfwGetMonitorPos",SideEffects::worstDefault, "glfwGetMonitorPos")
	->args({"monitor","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKey)>(*this, lib, "glfwGetKey",SideEffects::worstDefault, "glfwGetKey")
	->args({"window","key"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwUpdateGamepadMappings)>(*this, lib, "glfwUpdateGamepadMappings",SideEffects::worstDefault, "glfwUpdateGamepadMappings")
	->args({"string"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetGamma)>(*this, lib, "glfwSetGamma",SideEffects::worstDefault, "glfwSetGamma")
	->args({"monitor","gamma"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwIconifyWindow)>(*this, lib, "glfwIconifyWindow",SideEffects::worstDefault, "glfwIconifyWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowShouldClose)>(*this, lib, "glfwSetWindowShouldClose",SideEffects::worstDefault, "glfwSetWindowShouldClose")
	->args({"window","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowUserPointer)>(*this, lib, "glfwGetWindowUserPointer",SideEffects::worstDefault, "glfwGetWindowUserPointer")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetJoystickUserPointer)>(*this, lib, "glfwSetJoystickUserPointer",SideEffects::worstDefault, "glfwSetJoystickUserPointer")
	->args({"jid","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMouseButton)>(*this, lib, "glfwGetMouseButton",SideEffects::worstDefault, "glfwGetMouseButton")
	->args({"window","button"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwHideWindow)>(*this, lib, "glfwHideWindow",SideEffects::worstDefault, "glfwHideWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetFramebufferSize)>(*this, lib, "glfwGetFramebufferSize",SideEffects::worstDefault, "glfwGetFramebufferSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateStandardCursor)>(*this, lib, "glfwCreateStandardCursor",SideEffects::worstDefault, "glfwCreateStandardCursor")
	->args({"shape"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowIconifyCallback)>(*this, lib, "glfwSetWindowIconifyCallback",SideEffects::worstDefault, "glfwSetWindowIconifyCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorWorkarea)>(*this, lib, "glfwGetMonitorWorkarea",SideEffects::worstDefault, "glfwGetMonitorWorkarea")
	->args({"monitor","xpos","ypos","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwMaximizeWindow)>(*this, lib, "glfwMaximizeWindow",SideEffects::worstDefault, "glfwMaximizeWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickName)>(*this, lib, "glfwGetJoystickName",SideEffects::worstDefault, "glfwGetJoystickName")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVideoMode)>(*this, lib, "glfwGetVideoMode",SideEffects::worstDefault, "glfwGetVideoMode")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwDefaultWindowHints)>(*this, lib, "glfwDefaultWindowHints",SideEffects::worstDefault, "glfwDefaultWindowHints")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorUserPointer)>(*this, lib, "glfwGetMonitorUserPointer",SideEffects::worstDefault, "glfwGetMonitorUserPointer")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorPosCallback)>(*this, lib, "glfwSetCursorPosCallback",SideEffects::worstDefault, "glfwSetCursorPosCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowUserPointer)>(*this, lib, "glfwSetWindowUserPointer",SideEffects::worstDefault, "glfwSetWindowUserPointer")
	->args({"window","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowContentScale)>(*this, lib, "glfwGetWindowContentScale",SideEffects::worstDefault, "glfwGetWindowContentScale")
	->args({"window","xscale","yscale"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowPos)>(*this, lib, "glfwSetWindowPos",SideEffects::worstDefault, "glfwSetWindowPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetRequiredInstanceExtensions)>(*this, lib, "glfwGetRequiredInstanceExtensions",SideEffects::worstDefault, "glfwGetRequiredInstanceExtensions")
	->args({"count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwPollEvents)>(*this, lib, "glfwPollEvents",SideEffects::worstDefault, "glfwPollEvents")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowOpacity)>(*this, lib, "glfwSetWindowOpacity",SideEffects::worstDefault, "glfwSetWindowOpacity")
	->args({"window","opacity"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateWindow)>(*this, lib, "glfwCreateWindow",SideEffects::worstDefault, "glfwCreateWindow")
	->args({"width","height","title","monitor","share"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickGUID)>(*this, lib, "glfwGetJoystickGUID",SideEffects::worstDefault, "glfwGetJoystickGUID")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowHintString)>(*this, lib, "glfwWindowHintString",SideEffects::worstDefault, "glfwWindowHintString")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRawMouseMotionSupported)>(*this, lib, "glfwRawMouseMotionSupported",SideEffects::worstDefault, "glfwRawMouseMotionSupported")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursor)>(*this, lib, "glfwSetCursor",SideEffects::worstDefault, "glfwSetCursor")
	->args({"window","cursor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowSize)>(*this, lib, "glfwSetWindowSize",SideEffects::worstDefault, "glfwSetWindowSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetCursorPos)>(*this, lib, "glfwSetCursorPos",SideEffects::worstDefault, "glfwSetCursorPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickHats)>(*this, lib, "glfwGetJoystickHats",SideEffects::worstDefault, "glfwGetJoystickHats")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetGammaRamp)>(*this, lib, "glfwSetGammaRamp",SideEffects::worstDefault, "glfwSetGammaRamp")
	->args({"monitor","ramp"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetCursorPos)>(*this, lib, "glfwGetCursorPos",SideEffects::worstDefault, "glfwGetCursorPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetClipboardString)>(*this, lib, "glfwGetClipboardString",SideEffects::worstDefault, "glfwGetClipboardString")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSwapBuffers)>(*this, lib, "glfwSwapBuffers",SideEffects::worstDefault, "glfwSwapBuffers")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetCurrentContext)>(*this, lib, "glfwGetCurrentContext",SideEffects::worstDefault, "glfwGetCurrentContext")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowSizeLimits)>(*this, lib, "glfwSetWindowSizeLimits",SideEffects::worstDefault, "glfwSetWindowSizeLimits")
	->args({"window","minwidth","minheight","maxwidth","maxheight"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwInit)>(*this, lib, "glfwInit",SideEffects::worstDefault, "glfwInit")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorPhysicalSize)>(*this, lib, "glfwGetMonitorPhysicalSize",SideEffects::worstDefault, "glfwGetMonitorPhysicalSize")
	->args({"monitor","widthMM","heightMM"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTime)>(*this, lib, "glfwGetTime",SideEffects::worstDefault, "glfwGetTime")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetMonitorUserPointer)>(*this, lib, "glfwSetMonitorUserPointer",SideEffects::worstDefault, "glfwSetMonitorUserPointer")
	->args({"monitor","pointer"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowPosCallback)>(*this, lib, "glfwSetWindowPosCallback",SideEffects::worstDefault, "glfwSetWindowPosCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVideoModes)>(*this, lib, "glfwGetVideoModes",SideEffects::worstDefault, "glfwGetVideoModes")
	->args({"monitor","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRequestWindowAttention)>(*this, lib, "glfwRequestWindowAttention",SideEffects::worstDefault, "glfwRequestWindowAttention")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetProcAddress)>(*this, lib, "glfwGetProcAddress",SideEffects::worstDefault, "glfwGetProcAddress")
	->args({"procname"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickUserPointer)>(*this, lib, "glfwGetJoystickUserPointer",SideEffects::worstDefault, "glfwGetJoystickUserPointer")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetTime)>(*this, lib, "glfwSetTime",SideEffects::worstDefault, "glfwSetTime")
	->args({"time"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowTitle)>(*this, lib, "glfwSetWindowTitle",SideEffects::worstDefault, "glfwSetWindowTitle")
	->args({"window","title"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowMonitor)>(*this, lib, "glfwSetWindowMonitor",SideEffects::worstDefault, "glfwSetWindowMonitor")
	->args({"window","monitor","xpos","ypos","width","height","refreshRate"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowOpacity)>(*this, lib, "glfwGetWindowOpacity",SideEffects::worstDefault, "glfwGetWindowOpacity")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwDestroyCursor)>(*this, lib, "glfwDestroyCursor",SideEffects::worstDefault, "glfwDestroyCursor")
	->args({"cursor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwFocusWindow)>(*this, lib, "glfwFocusWindow",SideEffects::worstDefault, "glfwFocusWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwRestoreWindow)>(*this, lib, "glfwRestoreWindow",SideEffects::worstDefault, "glfwRestoreWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowAttrib)>(*this, lib, "glfwSetWindowAttrib",SideEffects::worstDefault, "glfwSetWindowAttrib")
	->args({"window","attrib","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwInitHint)>(*this, lib, "glfwInitHint",SideEffects::worstDefault, "glfwInitHint")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwExtensionSupported)>(*this, lib, "glfwExtensionSupported",SideEffects::worstDefault, "glfwExtensionSupported")
	->args({"extension"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowMaximizeCallback)>(*this, lib, "glfwSetWindowMaximizeCallback",SideEffects::worstDefault, "glfwSetWindowMaximizeCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVersionString)>(*this, lib, "glfwGetVersionString",SideEffects::worstDefault, "glfwGetVersionString")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGamepadState)>(*this, lib, "glfwGetGamepadState",SideEffects::worstDefault, "glfwGetGamepadState")
	->args({"jid","state"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWaitEventsTimeout)>(*this, lib, "glfwWaitEventsTimeout",SideEffects::worstDefault, "glfwWaitEventsTimeout")
	->args({"timeout"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowShouldClose)>(*this, lib, "glfwWindowShouldClose",SideEffects::worstDefault, "glfwWindowShouldClose")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwJoystickIsGamepad)>(*this, lib, "glfwJoystickIsGamepad",SideEffects::worstDefault, "glfwJoystickIsGamepad")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetTimerFrequency)>(*this, lib, "glfwGetTimerFrequency",SideEffects::worstDefault, "glfwGetTimerFrequency")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSwapInterval)>(*this, lib, "glfwSwapInterval",SideEffects::worstDefault, "glfwSwapInterval")
	->args({"interval"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwJoystickPresent)>(*this, lib, "glfwJoystickPresent",SideEffects::worstDefault, "glfwJoystickPresent")
	->args({"jid"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKeyScancode)>(*this, lib, "glfwGetKeyScancode",SideEffects::worstDefault, "glfwGetKeyScancode")
	->args({"key"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwVulkanSupported)>(*this, lib, "glfwVulkanSupported",SideEffects::worstDefault, "glfwVulkanSupported")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetKeyName)>(*this, lib, "glfwGetKeyName",SideEffects::worstDefault, "glfwGetKeyName")
	->args({"key","scancode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowRefreshCallback)>(*this, lib, "glfwSetWindowRefreshCallback",SideEffects::worstDefault, "glfwSetWindowRefreshCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWindowHint)>(*this, lib, "glfwWindowHint",SideEffects::worstDefault, "glfwWindowHint")
	->args({"hint","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowSize)>(*this, lib, "glfwGetWindowSize",SideEffects::worstDefault, "glfwGetWindowSize")
	->args({"window","width","height"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwMakeContextCurrent)>(*this, lib, "glfwMakeContextCurrent",SideEffects::worstDefault, "glfwMakeContextCurrent")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetPrimaryMonitor)>(*this, lib, "glfwGetPrimaryMonitor",SideEffects::worstDefault, "glfwGetPrimaryMonitor")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwCreateCursor)>(*this, lib, "glfwCreateCursor",SideEffects::worstDefault, "glfwCreateCursor")
	->args({"image","xhot","yhot"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwPostEmptyEvent)>(*this, lib, "glfwPostEmptyEvent",SideEffects::worstDefault, "glfwPostEmptyEvent")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowIcon)>(*this, lib, "glfwSetWindowIcon",SideEffects::worstDefault, "glfwSetWindowIcon")
	->args({"window","count","images"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowPos)>(*this, lib, "glfwGetWindowPos",SideEffects::worstDefault, "glfwGetWindowPos")
	->args({"window","xpos","ypos"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetError)>(*this, lib, "glfwGetError",SideEffects::worstDefault, "glfwGetError")
	->args({"description"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetWindowAspectRatio)>(*this, lib, "glfwSetWindowAspectRatio",SideEffects::worstDefault, "glfwSetWindowAspectRatio")
	->args({"window","numer","denom"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetGammaRamp)>(*this, lib, "glfwGetGammaRamp",SideEffects::worstDefault, "glfwGetGammaRamp")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorName)>(*this, lib, "glfwGetMonitorName",SideEffects::worstDefault, "glfwGetMonitorName")
	->args({"monitor"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwShowWindow)>(*this, lib, "glfwShowWindow",SideEffects::worstDefault, "glfwShowWindow")
	->args({"window"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetVersion)>(*this, lib, "glfwGetVersion",SideEffects::worstDefault, "glfwGetVersion")
	->args({"major","minor","rev"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetJoystickButtons)>(*this, lib, "glfwGetJoystickButtons",SideEffects::worstDefault, "glfwGetJoystickButtons")
	->args({"jid","count"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwTerminate)>(*this, lib, "glfwTerminate",SideEffects::worstDefault, "glfwTerminate")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetMonitorContentScale)>(*this, lib, "glfwGetMonitorContentScale",SideEffects::worstDefault, "glfwGetMonitorContentScale")
	->args({"monitor","xscale","yscale"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetInputMode)>(*this, lib, "glfwGetInputMode",SideEffects::worstDefault, "glfwGetInputMode")
	->args({"window","mode"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetInputMode)>(*this, lib, "glfwSetInputMode",SideEffects::worstDefault, "glfwSetInputMode")
	->args({"window","mode","value"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwWaitEvents)>(*this, lib, "glfwWaitEvents",SideEffects::worstDefault, "glfwWaitEvents")
	->args({})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwSetFramebufferSizeCallback)>(*this, lib, "glfwSetFramebufferSizeCallback",SideEffects::worstDefault, "glfwSetFramebufferSizeCallback")
	->args({"window","callback"})
;
#endif
#ifdef GLOBAL_NAMESPACE
addExtern<DAS_BIND_FUN(glfwGetWindowAttrib)>(*this, lib, "glfwGetWindowAttrib",SideEffects::worstDefault, "glfwGetWindowAttrib")
	->args({"window","attrib"})
;
#endif
