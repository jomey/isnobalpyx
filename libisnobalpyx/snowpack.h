#ifndef SNOWPACK_H
#define SNOWPACK_H

struct TopLayer {
  double temperature;
  double height;
};

struct BottomLayer {
  double height;
};

struct Energy {
  double net_radiation;
};

class Snowpack {
public:
  TopLayer top_layer;
  BottomLayer bottom_layer;
  Energy energy;

  Snowpack(TopLayer& top_layer, BottomLayer& bottom_layer);

  double height() const;
};

#endif // SNOWPACK_H
