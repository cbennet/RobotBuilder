#set($command = $helper.getByName($command_name, $robot))
#set($params = $command.getProperty("Parameters").getValue())
#header()

\#include "Commands/#class($command.name).h"
\#include "Robot.h"
#@autogenerated_code("constructor", "")
#parse("${exporter_path}Command-constructor.cpp")
#end

// Called just before this Command runs the first time
void #class($command.name)::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void #class($command.name)::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool #class($command.name)::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void #class($command.name)::End(bool interrupted) {

}

bool #class($command.name)::RunsWhenDisabled() const {
    #@autogenerated_code("disabled", "        ")
    #parse("${exporter_path}Command-disabled.cpp")
    #end
}
