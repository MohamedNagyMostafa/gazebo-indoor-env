#include <gazebo-11/gazebo/gazebo.hh>

namespace gazebo
{
    class HelloPlugin : public WorldPlugin
    {
    public:
        HelloPlugin() : WorldPlugin(){
            printf("Hello World\n");
        }

        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) override
        {
        }
    };

    GZ_REGISTER_WORLD_PLUGIN(HelloPlugin)
}